#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b){
    if(b == 0)  return a;
    else return gcd(b,a%b);
}
int main(){
    double n1,m1,n2,m2,k;
    int flag = 0;
    scanf("%lf/%lf %lf/%lf %lf",&n1,&m1,&n2,&m2,&k);
    // int a = n1 / m1 + 0.5;
    // int b = n2 / m2 + 0.5;
    int a = round(n1 / m1 * k);
    int b = round(n2 / m2 * k);
    if(a > b)  {
        int t = a;a = b;b = t;
    }
    for(int i = a;i <= b;i++){
        if(gcd(i,k) == 1)  {
            // if(flag != 0)   cout<<" "<<i<<"/"<<k;
            if(flag != 0)   printf(" %d/%.0lf",i,k);
            else{
                printf("%d/%.0lf",i,k);
                flag = 1;
            }
        }
    }
    return 0;
}