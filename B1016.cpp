/*
 * @Author: your name
 * @Date: 2020-04-03 22:59:02
 * @LastEditTime: 2020-04-03 23:13:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PatPrac/B1016.cpp
 */
#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;
int main(){
    string a,b;
    char d1,d2;
    cin>>a>>d1>>b>>d2;
    int d1_time = 0,d2_time = 0;
    while(a.find(d1) != string::npos){
        a.erase(a.find(d1),1);
        d1_time++;
    }
    while(b.find(d2) != string::npos){
        b.erase(b.find(d2),1);
        d2_time++;
    }
    int r1 = 0,r2 = 0;
    while(d1_time--){
        r1 = r1 * 10 + d1 - '0';
    }
    while(d2_time--){
        r2 = r2 * 10 + d2 - '0';
    }
    cout<<r1 + r2;
    return 0;
}