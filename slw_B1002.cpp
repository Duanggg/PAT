#include <iostream>

using namespace std;

string word[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

bool flag = true;

int getWord (int n){
    if(n == 0){
        return 0;
    }
    getWord(n/10);
    if(flag){
        cout<< word[n%10];
        flag = false;
    }else{
        cout<<" "<< word[n%10];
    }
}

int main(){
    int sum = 0,num;
    string totalStr;
    cin>>totalStr;
    for (int i = 0; i < totalStr.length(); i++)
    {
        sum = sum + (totalStr[i] - '0');
    }
    getWord(sum);
    return 0;
}