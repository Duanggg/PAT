/*
 * @Author: your name
 * @Date: 2020-04-02 21:26:40
 * @LastEditTime: 2020-04-03 00:25:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PAT_Prac/B1007.cpp
 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
// int p[100000];
vector<int> p;
bool isPrime(int n){
    if(n == 2 || n == 3){
        return true;
    }
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
void initPrime(int n){//初始化小于n的素数表vector p
    for(int i = 2;i <n;i++){
        if(isPrime(i)){
            p.push_back(i);
            // printf("插入了素数：%d \n",i);
        }
    }
}
int main(){
    int n,count = 0;
    scanf("%d",&n);
    initPrime(n);
    int len = p.size();
    for(int i = 0;i <= len - 2;i++){
        if(p[i] + 2 == p[i + 1]){
            // printf("%d 和 %d\n",p[i],p[i + 1]);
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
// #include<stdio.h>
// #include<iostream>
// #include<vector>
// #include <typeinfo>
// using namespace std;
// vector<int> p;
// int main(){
//     p.push_back(1);
//     // printf("%d",p);
//     // printf("%d",p.size());
//     int len = p.size();
//     cout<<p.size() - 2<<endl;
//     // for(int a = 0;a< p.size() - 2; a++){

//     //     printf("a = %d  但是 p.size = %d\n",a,p.size());
//     // }

//     return 0;
// }