/*
 * @Author: your name
 * @Date: 2020-04-02 17:07:10
 * @LastEditTime: 2020-04-02 17:26:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PAT_Prac/B1006.cpp
 */
#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int b,s,num;
    while(n >= 100){
        printf("B");
        n -= 100;
    }
    while(n >= 10){
        printf("S");
        n -= 10;
    }
    for(int i = 1;n > 0;i++){
        printf("%d",i);
        n--;
    }
    return 0;
}