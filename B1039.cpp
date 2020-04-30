#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
int main(){
    int n,flag = 0;;
    map<int,int> mp;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        int grade;
        scanf("%d",&grade);
        mp.find(grade) == mp.end() ? mp[grade] = 1 : mp[grade]++;
    }
    int k;
    scanf("%d",&k);
    for(int i = 0;i < k;i++){
        int f;
        scanf("%d",&f);
        if(flag == 0)   {
            mp.find(f) == mp.end() ? printf("0") : printf("%d",mp[f]);    
        }
        else mp.find(f) == mp.end() ? printf(" 0") : printf(" %d",mp[f]);
        flag++;
    }
    return 0;
    }