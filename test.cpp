#include<stdio.h>
#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<regex>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}
int main(){
    // vector<pair<int,int> > v;
    // v.push_back(make_pair(1,2));
    // v.push_back(make_pair(1,3));
    // v.push_back(make_pair(1,1));
    // sort(v.begin(),v.end(),cmp);
    // for(auto it = v.begin();it != v.end();it++){
    //     cout<<(*it).second<<endl;
    // }
    string s = "...aa.";
    regex rex("(([a-z]|[A-Z]|[.])+)(([a-z]|[A-Z])+)");
    if(regex_match(s,rex)){
        cout<<"true"<<endl;
    }
    return 0;
}