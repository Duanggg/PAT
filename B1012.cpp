/*
 * @Author: your name
 * @Date: 2020-04-03 11:48:29
 * @LastEditTime: 2020-04-03 20:21:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PatPrac/B1012.cpp
 */
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n,temp;
    int a,b,c,d,e;
    a = b = c = d = e = 0;
    int a1,a2,a3,a5;
    a1 = a2 = a3 = a5 = 0;
    double a4 = 0.0;
    cin>>temp;
    // while(cin>>n){
    while(temp--){
        cin>>n;
        if(n % 5 == 0 && n % 2 == 0){
            a1 += n;
            a++;
        }

        if(n % 5 == 1){
            if(b % 2 == 0){
                a2 += n;
            }
            else{
                a2 = a2 - n;
            }
            b++;
        }

        if(n % 5 == 2){
            c++;
        }
        if(n % 5 == 3){
            a4 += (double)n;
            d++;
            // cout<<endl<<"a4 = "<<a4<<"  d = "<<d<<endl;
        }
        if(n % 5 == 4){
            if(a5 < n){
                a5 = n;
            }
            e++;
        }

    }
    if(!a)  cout<<"N";
    else    cout<<a1;
    if(!b)  cout<<" N";
    else    cout<<" "<<a2;
    // cout<<" "<<c;
    if(!c)  cout<<" N";
    else    cout<<" "<<c;
    if(!d)  cout<<" N";
    else    printf(" %.1f",a4 / (double)d);
    if(!e)  cout<<" N";
    else    cout<<" "<<a5;
    return 0;
}