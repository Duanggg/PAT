#include <iostream>
#include <cctype>
#include <regex>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        getchar();
        getline(cin,s);
        regex rex("([a-z]|[0-9]|[A-Z]|[.]){6,}");
        regex rex1("((([a-z]|[A-Z]|[.])*)([a-z]|[A-Z])+)(([a-z]|[A-Z]|[.])*)");
        regex rex2("((([0-9]|[.])*)(([0-9])+)(([0-9]|[.])*))");
        if(s.length() < 6) {
            cout<<"Your password is tai duan le.\n";
        }else if(!regex_match(s,rex)){
            cout<<"Your password is tai luan le.\n";
        }else if(regex_match(s,rex1)){
            cout<<"Your password needs shu zi.\n";
        }else if(regex_match(s,rex2)){
            cout<<"Your password needs zi mu.\n";
        }else{
            cout<<"Your password is wan mei.\n";
        }
    }
    return 0;
}