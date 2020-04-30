// #include<iostream>
// #include<algorithm>

// using namespace std;
// int main(){
//     string c;
//     cin>>c;
//     for(int i = 0;i < 10;i++){
//         string a = c,b = c,t = "";
//         reverse(b.begin(),b.end());
//         if(a == b){
//             cout<<a<<" is a palindromic number."<<endl;
//             return 0;
//         }
//         int jin = 0;
//         for(int j = 0;j < a.length();j++){
//             int num = a[a.length() - 1 - j] + b[b.length() - 1 - j] - '0' - '0' + jin;
//             jin = 0;
//             // t = t + num + '0';
//             if(num >= 10)  {
//                 jin = 1;
//                 num -= 10;
//             }               
//             char c = num + '0';
//             t = c + t;
//             if(j + 1 == a.length()&&jin){
//                 t = '1' + t;
//             }
//         }
//         c = t;
//         cout<<a<<" + "<<b<<" = "<<c<<endl;
//     }
//     cout<<"Not found in 10 iterations.";
//     return 0;
// }











































#include<iostream>
#include<algorithm>

using namespace std;

bool isReverse(string b){
    string str1 = b;
    reverse(str1.begin(),str1.end());
    return  str1 == b ? true : false; 
}

string getReverse(string str1){
    string currentNum = str1;
    reverse(currentNum.begin(),currentNum.end());
    string newStr = "";
    int add = 0;
    for(int n=str1.length()-1;n >= 0;n--){
        int sum = str1[n] + currentNum[n] + add - '0' - '0';
        if(sum > 9){
            add = 1;
        }else{
            add = 0;
        }
        char singnStr = sum - add*10 + '0';
        if(n == 0 && add != 0){
            newStr = singnStr + newStr;
            newStr = "1" + newStr;
        }else{
            newStr = singnStr + newStr;
        }
    }
    cout<<str1<<" + "<<currentNum<<" = "<<newStr<<endl;
    return newStr;
}

int main(){
    string str;
    int times = 10;
    cin>>str;
    while(times--){
        if(isReverse(str)){
            cout<<str<<" is a palindromic number."<<endl;
            return 0;
        }else{
            str = getReverse(str);
        }
    }
    cout<<"Not found in 10 iterations.";
    return 0;
}

