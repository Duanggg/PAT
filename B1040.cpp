#include<iostream>
#include<vector>

using namespace std;
int main(){
    string s;
    cin>>s;
    vector<vector<int> > v(3);
    //v[0]:P  v[1]:A  v[2]:T
    //统计P A T所在位置
    for(int i = 0;i < s.length();i++){
        if(s[i] == 'P')     v[0].push_back(i);
        else if(s[i] == 'A')    v[1].push_back(i);
        else if(s[i] == 'T')    v[2].push_back(i); 
    }
    int cnt = 0;
    for(int i = 0;i < v[0].size();i++){
        for(int j = 0;j < v[1].size();j++){

            if(v[0][i] < v[1][j]){
                for(int k = 0;k < v[2].size();k++){
                    if(v[1][j] < v[2][k])  {
                        cnt++;
                    } 
                    cnt = cnt % 1000000007;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}