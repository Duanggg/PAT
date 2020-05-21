#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {

    int total, num, arr[110];
    cin>>total>>num;
    bool flag = true;
    for (int i = 0; i < total; i++)
    {
        scanf("%d", &arr[i]);
    }

    num = num%total;

    for (int i = total - num; i < total; i++)
    {
        if(flag){
            cout<< arr[i];
            flag = false;
        }else{
            cout<<" "<< arr[i];
        }
    }
    
    for (int i = 0; i < total - num; i++)
    {
        if(flag){
            cout<< arr[i];
            flag = false;
        }else{
            cout<<" "<< arr[i];
        }
    }
    return 0;
}