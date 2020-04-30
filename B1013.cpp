/*
 * @Author: your name
 * @Date: 2020-04-03 14:56:56
 * @LastEditTime: 2020-04-03 22:38:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PatPrac/B1013.cpp
 */
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> prime;
bool isP(int n){
    if(n == 2||n == 3)
        return true;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int m,n;
    int prt_cnt = 0;
    int p_num = 0;
    cin>>m>>n;
    for(int i = 2;prime.size() < n - m + 1;i++){
        if(isP(i)){
            p_num++;
            if(p_num >= m){
                //是第m个素数，那么push入向量
                prime.push_back(i);
            }
        }
    }
    for(int i = 0;i < prime.size();i++){
        if(i + 1 == prime.size()){
            cout<<prime[i];
        }
        else if((i + 1) % 10 == 0){
            cout<<prime[i]<<endl;
        }
        else {
            cout<<prime[i]<<" ";
        }
    }
    // for(int i = m;i < n;i++){
    //     if(isP(i)){
    //         if(cnt == 0){
    //             cout<<i;
    //         }
    //         cnt++;
    //         if(cnt != 1 &&cnt %10 == 1){
    //             cout<<endl<<i;
    //         }
    //         else if(i)
    //     }
    // }
    return 0;
}