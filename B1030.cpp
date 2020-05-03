#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,p,max,max_l = 1;
    scanf("%d%d",&n,&p);
    vector<int> v(n);
    for(int i = 0;i < n;i++){
        scanf("%d",&v[i]);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size() - 1;i++){
        if(v[i] > v[0] * p)    max_l = i;
    }
    for(int i = 1;i < n;i++){
        if(i + max_l > n)   break;
        for(int j = v.size() - 1;j >= i;j--){
            if(v[j] <= v[i] * p){
                max_l = max_l < (j - i + 1) ? (j - i + 1):max_l;
                break;
                // max = j;
            }
        }
        // for(int j = max_l - 1;j < v.size() - 1;j++){
        //     if(v[j] > v[i] * p){
        //         max_l = max_l < (j - i) ? (j - i):max_l;
        //         break;
        //     }
        // }
    }
    printf("%d",max_l);
    return 0;
}