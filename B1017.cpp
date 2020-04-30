// /*
//  * @Author: your name
//  * @Date: 2020-04-03 23:34:06
//  * @LastEditTime: 2020-04-04 00:00:56
//  * @LastEditors: Please set LastEditors
//  * @Description: In User Settings Edit
//  * @FilePath: /PatPrac/B1017.cpp
//  */
// #include<stdio.h>
// #include<iostream>
// #include<string>

// using namespace std;
// int main(){
//     string a;
//     int b;
//     cin>>a>>b;
//     while(a.length() > 1){
//         int p,q;
//         if(a[0] == '0'){
//             a.erase(0,1);
//         }
//         if(a[0] - '0' >= b){
//             p = (a[0] - '0') / b;
//             cout<<p;
//             a[0] = (a[0] - '0') % b;
//         }
//         else{
//             p = ((a[0] - '0') * 10 +(a[1] - '0')) / b;
//             cout<<p;
//             a.erase(0,1);
//             a[0] = ((a[0] - '0') * 10 +(a[1] - '0')) % b;
//         }
//     }
//     if(a[0] - '0' >= b){
//         cout<<(a[0] - '0') / b;
//         a[0] = (a[0] - '0') % b;
//     }       
//     cout<<" "<<a[0];
//     return 0;
// }




