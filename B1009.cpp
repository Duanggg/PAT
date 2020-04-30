/*
 * @Author: your name
 * @Date: 2020-04-03 09:50:09
 * @LastEditTime: 2020-04-03 09:58:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PatPrac/B1009.cpp
 */
#include<stdio.h>
#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    vector<string> s;
    string temp;
    while(cin>>temp){
        s.push_back(temp);
    }
    int len = s.size();
    cout<<s[len - 1];
    for(int i = len - 2;i >= 0;i--){
        cout<<" "<<s[i];
    }
    return 0;
}