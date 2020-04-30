/*
 * @Author: your name
 * @Date: 2020-04-02 12:07:29
 * @LastEditTime: 2020-04-02 13:07:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /PAT_Prac/B1005.cpp
 */
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
int cmp(int a,int b){
    return a>b;
}
int main(){
    int n;
    map<int,bool> mp;
    vector<int> v;
    map<int,bool>::iterator it;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        v.push_back(num);
        mp[num] = false;
    }
    for(int i=0;i<n;i++){
        int cor = v[i];
        while(cor != 1){
            if(cor % 2 != 0){
                cor = (cor * 3 + 1)/2;
            }
            else{
                cor /= 2;
            }
            it = mp.find(cor);
            if(it != mp.end()){
                mp[cor] = true;
            }
        }
        
    }
    for(it = mp.begin();it != mp.end();it++){
        if(it->second){
            vector<int>::iterator vit = find(v.begin(),v.end(),it->first);
            if(vit != v.end()){
                v.erase(vit);
            }
        }
    }
    sort(v.begin(),v.end(),cmp);
    printf("%d",v[0]);
    for(int i = 1;i < v.size();i++){
        printf(" %d",v[i]);
    }
    return 0;
}