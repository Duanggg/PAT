#include<iostream>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
int main(){
    int m,n,tol,cnt = 0;
    int x,y,color;
    map<int,int> hash;
    scanf("%d %d %d",&m,&n,&tol);
    vector<vector<int> > v;
    for(int i = 0;i < n;i++){
        vector<int> t;
        for(int j = 0;j < m;j++){
            int a;
            scanf("%d",&a);
            if(hash.find(a) == hash.end())    hash[a] = 1;
            else    hash[a]++;
            t.push_back(a);
        }
        v.push_back(t);
    }
    for(int i = 1;i < n - 1;i++){
        for(int j = 1;j < m - 1;j++){
            if(abs(v[i][j] - v[i-1][j]) > tol&&abs(v[i][j] - v[i][j-1]) > tol&&abs(v[i][j] - v[i-1][j-1]) > tol&&abs(v[i][j] - v[i-1][j+1]) > tol&&abs(v[i][j] - v[i+1][j]) > tol&&abs(v[i][j] - v[i][j+1]) > tol&&abs(v[i][j] - v[i+1][j+1]) > tol&&abs(v[i][j] - v[i+1][j-1]) > tol){
                if(hash[v[i][j]] > 1) continue;
                cnt++;
                x = j + 1;y = i + 1;color = v[i][j];
                if(cnt > 1) {printf("Not Unique");return 0;}
            }
        }
    }
    if(cnt != 0)    printf("(%d, %d): %d",x,y,color);
    if(cnt == 0)    printf("Not Exist");
    return 0;
}