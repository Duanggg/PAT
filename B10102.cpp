/*
 * @Author: your name
 * @Date: 2020-04-03 11:06:16
 * @LastEditTime: 2020-04-03 11:15:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PatPrac/B10102.cpp
 */
#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    int a,b,flag = 0;
    while(cin>>a>>b){
        if(b){
            if(flag == 1){
                cout<<" ";
            }
            cout<<a * b<<" "<<--b;
            flag = 1;
        }
    }
    if(!flag){
        cout<<"0 0";
    }
    return 0;
}