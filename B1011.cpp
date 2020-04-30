/*
 * @Author: your name
 * @Date: 2020-04-03 11:18:15
 * @LastEditTime: 2020-04-03 11:41:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PatPrac/B1011.cpp
 */
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    long a,b,c;
    for(int i = 1;i <= m;i++){
        cin>>a>>b>>c;
        cout<<"Case #"<<i<<": ";
        if(a + b > c){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    return 0;
}