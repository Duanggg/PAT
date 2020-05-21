#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main(){
    string num;
    map <int, char> obj;
    cin>> num;
    if(num == "000" || num == "00" || num == "0"){
        return 0;
    }
    if(num.length() == 3){
        obj[2] = 'G';
        obj[1] = 'S';
        obj[0] = 'B';
    }else if(num.length() == 2){
    obj[1] = 'G';
    obj[0] = 'S';
    }else if(num.length() == 1){
    obj[0] = 'G';
    }
    for (int i = 0 ; i < num.length() ; i++)
    {
        int word = num[i] - '0';
        if(obj[i] == 'B' || obj[i] == 'S'){
            while (word --)
            {
                cout<<obj[i];
            }
        }else if(obj[i] == 'G'){
            for (int j = 0; j < word; j++)
            {
                cout<<(j+1);
            }
        }
    }
    return 0;
}