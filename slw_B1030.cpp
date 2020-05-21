#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int N,p,min,max;
    scanf("%d %d",&N,&p);
    vector<int> arr(N);

    for (int i = 0; i < arr.size(); i++) scanf("%d", &arr[i]);

    sort(arr.begin(),arr.end());

    int maxL = 0;
    for (int i = 0; i < arr.size(); i++){
        if( arr.size() - i < maxL) break;
        //先确定开始的位置为 b
        int length = 0;
        for (int j = i + maxL; j < arr.size(); j++)
        {
            if(p >= (double)arr[j] / (double)arr[i]) length = j-i + 1;
            else break;
        }
        if(length > maxL) maxL = length;
    }
    cout<<maxL;
    return 0;
}