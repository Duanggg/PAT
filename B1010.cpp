/*
 * @Author: your name
 * @Date: 2020-04-03 10:11:17
 * @LastEditTime: 2020-04-03 10:57:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PatPrac/B1010.cpp
 */
#include<stdio.h>
#include<vector>
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<int,int> mp;
    int a,b;
    bool used = false;
    while(cin>>a){
        used = true;
        cin>>b;
        a = a * b;
        b--;
        // cout<<"输入：b = "<<b<<"；a = "<<a<<endl;
        if(!a && b){
            continue;
        }
        else{
            mp[b] = a;
        }
    }
    if(!used || (mp.size() == 1 && mp[0] == 0)){
        printf("0 0");
        return 0;
    }
    map<int,int>::reverse_iterator it;
    int fir = 0;
    for(it = mp.rbegin();it != mp.rend();it++){
        if(!fir){
            cout<<it->second;
            cout<<" "<<it->first;
            fir = 1;
        }
        else{
            cout<<" "<<it->second;
            cout<<" "<<it->first;
        }
    }
    return 0;
}