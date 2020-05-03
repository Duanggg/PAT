#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
struct people{
    string name;
    int h;
};
int main(){
    int n,k;
    cin>>n>>k;
    vector<people> v;
    for(int i = 0;i < n;i++){
        people p;
        cin>>p.name>>p.h;
        v.push_back(p);
    }
}