#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b){
    if(b == 0)  return a;
    else return gcd(b,a%b);
}
int main(){
    double n1,m1,n2,m2,k;
    int flag = 0,i;
    scanf("%lf/%lf %lf/%lf %lf",&n1,&m1,&n2,&m2,&k);
    double a = n1 / m1 * k;
    double b = n2 / m2 * k;
    // int a = round(n1 / m1 * k);
    // int b = round(n2 / m2 * k);
    if(a > b)  {
        double t = a;a = b;b = t;
    }
    if(round(a) == (int)a)   i = a + 1;
    else    i = round(a);
    for(;i < b;i++){
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