#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string>
#include<istream>
#include<time.h>

using namespace std;
int main(){
    map<string,string> mp;
    int n,not_avl = 0;
    cin>>n;
    int t = n;
    while(t--){
        string name,date;
        cin>>name>>date;
        date.erase(date.find('/'),1);
        date.erase(date.find('/'),1);
        if(date > "20140906" || date < "18140906"){
            not_avl ++;
            continue;
        }
        mp[date] = name;
    }
    if(not_avl == n){
        cout<<0;
        return 0;
    }
    map<string,string>::iterator it1 = mp.begin();
    map<string,string>::iterator it2 = mp.end();
    it2--;
    cout<<n - not_avl<<" "<<it1->second<<" "<<it2->second;
    return 0;
}