#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>

using namespace std;
struct moonPie{
    double price,amt,total_prc;
};
bool cmp(moonPie a, moonPie b){
    return a.price > b.price;
}
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    vector<moonPie> v;
    for(int i = 0;i < n;i++){
        moonPie p;//库存量
        cin>>p.amt;
        v.push_back(p);
    }
    for(int i = 0;i < n;i++){
        cin>>v[i].total_prc;
        v[i].price = v[i].total_prc / v[i].amt;
    }c
    sort(v.begin(),v.end(),cmp);
    double sold = 0.0;
    for(int i = 0;i < v.size()&&d != 0;i++){
        if(v[i].amt <= d){
            sold += v[i].total_prc;
            d -= v[i].amt;
            // cout<<endl<<"sold = "<<sold<<"    v["<<i<<"]"<<endl;
        }
        else{
            sold += v[i].price * d;
            break;
        }
        // cout<<endl<<"-----v["<<i<<"] = "<<v[i].amt<<endl;
        // cout<<"sold ======="<<sold<<endl;
    }
    printf("%.2f",sold);
    return 0;
}