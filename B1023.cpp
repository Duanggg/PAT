#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>

using namespace std;

bool cmp(int a,int b){
    return a<b;
}
int main(){
    vector<int> v;
    int n,i;
    // while(cin>>n){
    //     v.push_back(n);
    // }
    for(int j = 0;j < 10;j++){
        cin>>n;
        while(n--){
            v.push_back(j);
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(i = 0;v[i] == 0;i++){
    }
    cout<<v[i];
    v.erase(v.begin() + i);
    for(int j = 0;j < v.size();j++){
        cout<<v[j];
    }
    return 0;
}