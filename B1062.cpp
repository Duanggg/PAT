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
    if(a > b)  {
        double t = a;a = b;b = t;
    }
    for(i = 1;i < b;i++){
        if(i > a && gcd(i,k) == 1){
            if(flag != 0){
                   printf(" %d/%.0lf",i,k);
            }else{
                printf("%d/%.0lf",i,k);
                flag = 1;
            }
        }
    }
    return 0;
}