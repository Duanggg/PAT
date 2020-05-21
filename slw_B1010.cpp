#include <iostream>

using namespace std;

int main() {
    int x,z,count = 0;
    bool flag = true;
    while(scanf("%d %d", &x, &z) != EOF){
        if(z == 0 || x==0) {

        }
        else {
            count ++;
            if(flag) {
                flag = false;
                cout<< x*z<< " "<<(z - 1);
            }else{
                cout<<" "<< (x*z)<< " "<<(z - 1);
            }
        }
    }
    if(count == 0) {
        cout<<(0)<< " "<<(0);
    }
    return 0;
}