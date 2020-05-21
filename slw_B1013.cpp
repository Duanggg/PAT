#include <iostream>
#include <vector>
using namespace std;
int main() {
    int min,max;
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    cin>>min>>max;
    for (int i = 10; i > 0; i++)
    {
        bool flag = true;
        for (int j = 0; j < arr.size(); j++)
        {
            if(i % arr[j] == 0 ){
                flag = false;
                break;
            }
            if(arr[j] * arr[j] > i) {
                break;
            }
        }
        if(flag){
            arr.push_back(i);
        }
        if(arr.size() > max){
            break;
        }
    }
    int times = 1;
    for (int i = min - 1; i < max; i++)
    {
        if(times == 10){
                cout<<arr[i]<<endl;
        }else{
            if(i == max - 1){
                cout<<arr[i];
                break;
            }else{
                cout<<arr[i]<<" ";
            }            
        }
        if(times == 10){
            times = 1;
        }else{
            times = times + 1;
        }
    }
}