/*
 * @Author: your name
 * @Date: 2020-04-01 23:18:05
 * @LastEditTime: 2020-04-01 23:34:21
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PAT_Prac/.vscode/B1004.cpp
 */
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
struct stu{
    string name,num;
    int grade;
}S[10000];
bool cmp(stu a,stu b){
    return a.grade > b.grade;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i < n;i++){
        stu t;
        cin>>t.name>>t.num>>t.grade;
        S[i] = t;
    }
    sort(S,S + n,cmp);
    cout<<S[0].name<<" "<<S[0].num<<endl;
    cout<<S[n-1].name<<" "<<S[n-1].num;
    return 0;
}