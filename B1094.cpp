#include<iostream>
#include<string>
#include<math.h>
using namespace std;
bool isP(int n){
    if(n <= 1)  return false;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0)  return false;
    }
    return true;
}
int main(){
    string s;
    int n,l;
    cin>>l>>n>>s;
    for(int i = 0;i < l - n;i++){
        string t = s.substr(i,n);
        int now = stoi(t);
        if(isP(now)){
            cout<<t;
            return 0;
        }
    }
    cout<<"404";
    return 0;
}