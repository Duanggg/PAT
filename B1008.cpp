/*
 * @Author: your name
 * @Date: 2020-04-03 09:23:31
 * @LastEditTime: 2020-04-03 09:47:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PatPrac/B1008.cpp
 */
#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;
int main(){
    int n,m;
    vector<int> v;
    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i++){
        int num;
        scanf("%d",&num);
        v.push_back(num);
    }
    m = m % n;
    // printf("%d",v[n - m]);
    for(int i = 0;i < n;i++){
        if(n - m + i < n){
            if(i == 0){
                printf("%d",v[n - m + i]);
            }else{
                printf(" %d",v[n - m + i]);
            }
        }
        else{
            if(i == 0){
                printf("%d",v[i - m]);
            }else{
                printf(" %d",v[i - m]);
                }
        }
    }
    return 0;
}