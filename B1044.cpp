#include<iostream>
#include<map>
#include<vector>
#include<cctype>
using namespace std;
int main(){
    // jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec
    //tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou
    map<string,int> mpS,mpB;
    // mpS["jan"] = 1;mpS["feb"] = 2;mpS["mar"] = 3;mpS["apr"] = 4;mpS["may"] = 5;mpS["jun"] = 6;
    // mpS["jly"] = 7;mpS["aug"] = 8;mpS["sep"] = 9;mpS["oct"] = 10;mpS["nov"] = 11;mpS["dec"] = 12;mpS["tret"] = 0;
    // mpB["tam"] = 1;mpB["hel"] = 2;mpB["maa"] = 3;mpB["huh"] = 4;mpB["tou"] = 5;mpB["kes"] = 6;
    // mpB["hei"] = 7;mpB["elo"] = 8;mpB["syy"] = ;mpB[""] = ;mpB[""] = ;mpB[""] = ;
    string s1[13] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct","nov", "dec"};
    string s2[13] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    for(int i = 0;i < 13;i++){
        mpS[s1[i]] = i;
        mpB[s2[i]] = (i + 1) * 13;
    }
    int k;
    cin>>k;
    while(k--){
        string s;
        getline(cin,s);
        if(s[0] >= '0' && s[0] <= '9'){
            
        }else{
            string str1 = s.substr(0,3);
            if(str1 == s)   
        }
    }
    return 0;
}