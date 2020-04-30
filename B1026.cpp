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
void trnsT(double num){
    int h,m,s;
    int n = num;
    h = n / (60 * 60);
    n = n % (60 * 60);
    m = n / 60;
    n = n % 60;
    s = n;
    printf("%02d:%02d:%02d",h,m,s);
}
int main(){
    double c1,c2;
    double c = 100;
    cin>>c1>>c2;
    trnsT((c2 - c1) / 100 + 0.5);

    return 0;
}