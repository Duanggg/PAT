#include <iostream>

using namespace std;

int times = 0;


int getNum(int num){
    times = times + 1;
    int res;
    if(num%2 == 0){
        res = num/2;
    }else{
        res = (num*3+1)/2;
    }
    if(res == 1){
        cout<< times;
    }else{
        getNum(res);
    }
}

int main(){
    int num;
    scanf("%d",&num);
    if(num == 1){
        cout<< times;
    }else{
        getNum(num);
    }
}