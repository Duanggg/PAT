#include<iostream>

using namespace std;
int main(){
    int cnp = 0,cna = 0,cnt = 0;
    int res = 0;
    string s;
    cin>>s;
    for(int i = 0;i < s.length();i++){
        if(s[i] == 'T') cnt++;
    }
    for(int i = 0;i < s.length();i++){
        if(s[i] == 'P') cnp++;
        else if(s[i] == 'T')    cnt--;
        else if(s[i] == 'A')    res = (((cnp * cnt) % 1000000007) + res) % 1000000007;
    }
    cout<<res;
    return 0;
}