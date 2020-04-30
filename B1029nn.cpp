#include<iostream>
#include<vector>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    // map<char,int> mp;
    vector<char> v;
    for(int i = 0;i < s1.length();i++){
        if(find(v.begin(),v.end(),toupper(s1[i])) == v.end())   v.push_back(toupper(s1[i]));
    }
    for(int i = 0;i < s2.length();i++){
        s2[i] = toupper(s2[i]);
    }
    for(int i = 0;i < v.size();i++){
        if(s2.find(v[i]) == string::npos)  cout<<v[i];
    }
    return 0;
}