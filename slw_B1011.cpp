#include <iostream>
#include<stdio.h>

using namespace std;

int main() {
    int total;
    long a,b,c;
    cin>> total;
    for (int i = 1; i <= total; i++)
    {
        cin>>a>>b>>c;
        if((a + b) > c){
            cout<<"Case #"<<i<<": "<<"true"<<endl;
        }else {
            cout<<"Case #"<<i<<": "<<"false"<<endl;
        }
    }
    return 0;
}