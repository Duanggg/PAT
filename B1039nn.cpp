#include<iostream>

using namespace std;
int main(){
    string a,tgt;
    int flag = 0,x = 0,y = 0;
    cin>>a>>tgt;
    for(int i = 0;i < tgt.length();i++){
        if(a.find(tgt[i]) == string::npos){
            flag = 1;
            x++;
        }
        else    a.erase(a.find(tgt[i]),1);
    }
    if(flag)    cout<<"No "<<x;
    else    cout<<"Yes "<<a.length();
    return 0;
}