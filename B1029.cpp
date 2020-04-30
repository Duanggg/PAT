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
    string a,b;
    // vector<int> v;
    string v = "";
    cin>>a>>b;
    int j = 0;
    for(int i = 0;i < b.size();i++){
        while(a[j] != b[i]){
            if(v.find(a[j]) == v.npos&&v.find(a[j] + 'A' - 'a') == v.npos){
                if(a[j] >= 'a'&& a[j] <= 'z'){
                    a[j] += 'A' - 'a';
                
                }
                // if(a[j] == '_')     a[j] = ' ';

                v = v + a[j];
            }
            j++;
            continue;
        }
        j++;
    }
    while(j < a.length()){
            if(v.find(a[j]) == v.npos&&v.find(a[j] + 'A' - 'a') == v.npos){
                if(a[j] >= 'a'&& a[j] <= 'z'){
                    a[j] += 'A' - 'a';
                }
                // if(a[j] == '_')     a[j] = ' ';
                v = v + a[j];
            }
            j++;
    }
    replace(v.begin(),v.end(),'_',' ');
    cout<<v;
    return 0;
}