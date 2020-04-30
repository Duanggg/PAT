#include<iostream>

using namespace std;
int main(){
    string pwd;
    int n;
    cin>>pwd>>n;
    getchar();
    for(int i = 0;;i++){
        string key;
        getline(cin,key);
        if(key == "#")  break;
        if(i + 1 > n)   {
            cout<<"Account locked"<<endl;
            break;
        }
        if(key == pwd){
            cout<<"Welcome in"<<endl;
            break;
        }
        else    cout<<"Wrong password: "<<key<<endl;
    }
    return 0;
}