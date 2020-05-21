#include<stdio.h>
#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<regex>
#include<map>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}
int main(){

    string allId = "1234567890";
    string id = "456";
    regex r(".*("+ id +").*");
    if(regex_match(allId,r)){
        cout<<"匹配成功";
    }else{
        cout<<"匹配失败";
    }
    return 0;
}