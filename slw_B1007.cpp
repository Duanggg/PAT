#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num){
    int currentNum = num;
    int sqr = sqrt(currentNum) + 1;
    while ( sqr --)
    {
        if(sqr > 1 && currentNum%sqr == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    int num,times = 0,lastNum = 0;
    bool flag;
    cin>> num;
    num = num + 1;
    while (num -- )
    {
        if(num > 1){
            flag = isPrime(num);
            if(!flag){
                if(lastNum != 0){
                    if(lastNum - num == 2){
                        times = times + 1;
                    }
                }
                lastNum = num;
            }
        }
    }
    cout<< times;
}