#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string>
#include<istream>

using namespace std;
int main(){
    char sg;
    string str;
    int e;
    getline(cin,str);
    sg = str[0];
    cout<<sg;
    str.erase(0,1);
    string [] b = str.split("E");
    e = (b[1][1] - '0') * 10 +(b[1][2] - '0');
    if(b[1][0] == '-')  e = e * -1;
    // b[0].erase(b[0].find('.'),1);
    
    int flag = 0;
    if(e < 0){
        while((-1 * e)--){
            printf("0");
            if(flag == 0){
                printf(".");
                flag = 1;
            }
        }
        cout<<b[0].erase(b[0].find('.'),1);
    }
    else{
        cout<<b[0][0];
        b[0].erase(0,2);
        int i = 1;
        while(e--){
            if(b[0]){
                cout<<b[0][0];
                b.erase(0,1);
            }else{
                cout<<"0";
            }
        }
        if(b[0]){
            cout<<"."<<b[0];
        }
    }
    // cout<<sg<<num<<e;
    return 0;
}