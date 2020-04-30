#include<iostream>
#include<cctype>
#include<map>

using namespace std;
int main(){
    string s;
    map<char,int> mp;
    int max = 0;
    char max_c;
    getline(cin,s);
    for(int i = 0;i < s.length();i++){
        if(isalpha(s[i])){
            char c = tolower(s[i]);
            if(mp.find(c) == mp.end())  mp[c] = 1;
            else    mp[c]++;
            if(max < mp[c]){max = mp[c];max_c = c;}
            else if(max == mp[c]){
                if(max_c > c){
                    max = mp[c];max_c = c;
                }
            }
        }
    }
    cout<<max_c<<" "<<max;
    return 0;
}