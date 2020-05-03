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
    map<int,int> mp;
    mp[0]++;
    cout<<mp.size();
    return 0;
}