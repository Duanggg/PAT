#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>

using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>d;
    c = a + b;
    string result = "";
    while(c){
        result = (char)(c % d +'0') + result;
        c = c / d;
    }
    cout<<result;
    return 0;
}
