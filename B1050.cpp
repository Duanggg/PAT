#include<stdio.h>
#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    int a;
    scanf("%d",&a);
    int m,n,minus = a;
    for(int i = 1;i * i <= a;i++){
        if(a % i == 0 && a/i - i < minus){
            m = a / i;
            n = i;
            minus = m - n;
        }
    }
    cout<<m<<"   "<<n;

    return 0;
}