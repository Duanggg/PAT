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
void prnt(char c,int layer){
    int t = 2 * layer + 1;//每行输出的总字符数(空格+字符)
    //字符数：layer-i * 2 空格数：i
    for(int i = 0;i < layer;i++){
        int temp = t;
        int zi = (layer - i) * 2 - 1,kong = i;
        while(kong--)   cout<<" ";
        while(zi--)     cout<<c;
        kong = i;
        while(kong--)   cout<<" ";
        cout<<endl;
    }
    for(int i = layer - 2;i >= 0;i--){
        int temp = t;
        int zi = (layer - i) * 2 - 1,kong = i;
        while(kong--)   cout<<" ";
        while(zi--)     cout<<c;
        kong = i;
        while(kong--)   cout<<" ";
        cout<<endl;
    }
}
int main(){
    int n,i,use = 0;
    char c;
    cin>>n>>c;
    int num = n - 1;
    for(i = 1;num > 2 * (2 * i + 1);i++){
        num = num - 2 * (2 * i + 1);
    }
    use = n - num;
    prnt(c,i);
    cout<<num;
    // cout<<n<<" "<<num;
    return 0;
}