#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[100000];

int getNum(int num) {
    if(num%2 == 0){
        arr[num/2] = 1;
        getNum(num/2);
    }else if(num == 1){
        return 0;
    }else{
        arr[(3*num + 1)/2] = 1;
        getNum((3*num + 1)/2);
    }
}

bool cpl(int a,int b){
    return a > b;
}

int main() {
    int num,currentNum;
    cin>>num;
    bool flag = true;
    vector<int> saveNum;
    while(num --) {
        cin>>currentNum;
        saveNum.push_back(currentNum);
        getNum(currentNum);
    }
    
    sort(saveNum.begin(), saveNum.end(), cpl);
    
    for(int i = 0;i < saveNum.size();i++){
        if(arr[saveNum[i]] == 0){
            cout<< (flag ? "" : " ") <<saveNum[i];
            flag = false;
        }
    }
    
    return 0;
    
    
    
    
    
    
}