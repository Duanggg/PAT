#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
using namespace std;
int main(){
    string s;
    int hash[10] = {0};
    cin>>s;
    for(int i = 0;i < s.length();i++){
        hash[s[i] - '0']++;
    }
    for(int i = 0;i < 10;i++){
        if(hash[i]){
            printf("%d:%d\n",i,hash[i]);
        }
    }
    return 0;
}