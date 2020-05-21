#include <iostream>
#include<typeinfo>

using namespace std;
int gcd(int a,int b){
    if(b == 0)  return a;
    else return gcd(b,a%b);
}
int main(){
    double z1,z2,m1,m2;    
    double num1,num2;
    double denominator;
    scanf("%lf/%lf %lf/%lf %lf",&z1,&m1,&z2,&m2,&denominator);
    num1 = (z1/m1 < z2/m2) ? z1/m1 : z2/m2;
    num2 = (z1/m1 < z2/m2) ? z2/m2 : z1/m1;
    const double DEN = denominator;
    bool flag = true;
    double res = 0;
    for (int el = 0; res < num2; el++)
    {
        res = el/DEN;
        if(res > num1 && res< num2 && gcd(el,DEN) == 1){
            if(flag){
                cout<<el<<"/"<<DEN;
            }else{
                cout<<" "<<el<<"/"<<DEN;
            }
            flag = false;
        }        
    }
    return 0;
}