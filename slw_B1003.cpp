#include <iostream>

using namespace std;

int main(){
    int times;
    string str;
    cin>> times;
    while (times --)
    {
        cin>> str;
        int pl = 0,al = 0,al2 = 0,tl = 0,Al = 0;
        bool flag = false;
        bool isTShow = false;
        bool fault = false;
        for (int i = 0; i < str.length(); i++)
        {

            if(!(str[i] == 'A' || str[i] == 'P' || str[i] == 'T')){
                fault = true;
                cout<< "NO"<<endl;
                break;
            }

            if(str[i] == 'A') {
                if(isTShow){
                    al2 = al2 + 1;
                }else if(pl == 0){
                    al = al + 1;
                }
                if(flag){
                    Al= Al + 1;
                }
            }else if(str[i] == 'P'){
                if(tl != 0){
                    cout<< "NO"<<endl;
                    fault = true;
                    break;
                }
                pl = pl + 1;
                if(pl > 1){
                    cout<< "NO"<<endl;
                    fault = true;
                    break;
                }
                flag = true;
            }else if(str[i] == 'T'){
                if(pl == 0){
                    cout<< "NO"<<endl;
                    fault = true;
                    break;
                }
                flag = false;
                isTShow = true;
                tl = tl + 1;
                if(tl > 1){
                    cout<< "NO"<<endl;
                    break;
                }
            }
        }

        if(!fault){
            if(Al == 0){
                cout<< "NO"<<endl;
            }else if(pl == 0){
                cout<< "NO"<<endl;
            }else if(tl == 0){
                cout<< "NO"<<endl;
            }else if(Al == 1){
                if(al == al2){
                    cout<< "YES"<<endl;
                }else{
                    cout<< "NO"<<endl;
                }
            }else if(Al > 1){
                if(al * Al == al2){
                    cout<< "YES"<<endl;
                }else{
                    cout<< "NO"<<endl;
                }
            }
        }
    }
}