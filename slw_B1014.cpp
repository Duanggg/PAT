#include <iostream>
#include <map>
#include <ctype.h>

using namespace std;

int main() {


    // map<char, string> str11;
    // str11[1] = "dsadasda";
    // cout<< str11[2] <<endl;
    // if(str11[2] == ""){
    //     cout<<"true"<<endl;
    // }else{
    //     cout<<"false"<<endl;
    // }
    // cout<< "-----" <<endl;

    map<char, int> mpWord;
    int num = 1;
    for (char i = 'A'; i <= 'G'; i++)
    {
        mpWord[i] = num;
        num = num + 1;
    }

    map<int, string> week;
    week[0] = "SUN";
    week[1] = "MON";
    week[2] = "TUE";
    week[3] = "WED";
    week[4] = "THU";
    week[5] = "FRI";
    week[6] = "SAT";
    week[7] = "SUN";

    string week1,week2,time1,time2;
    getline(cin, week1);
    getline(cin, week2);
    getline(cin, time1);
    getline(cin, time2);

    string res;


    // 表示小时
    map<char,string> mpHour;
    int times = 0;
    for (int i = 0; i <= 9; i++)
    {
        string stri = to_string(i);
        char strt = times + '0';
        mpHour[strt] = stri;
        times = times + 1;
    }

    for (char i = 'A'; i <= 'N'; i++)
    {
        mpHour[i] = to_string(times);
        times = times + 1;
    }

    times = 0;

    for (int i = 0; i <= week1.length(); i++)
    {
        if(week1[i] == week2[i] && times == 0 && isupper(week1[i])){
            if(mpWord[week1[i]] != 0){
                res = res + (string)(week[mpWord[week1[i]]]) + " ";
                times = times + 1;
            }
        }else if (week1[i] == week2[i] && times == 1 ) {
            if (mpHour[week1[i]] != "") {
                times = times + 1;
                if( isdigit(week1[i]) != 0){
                    res = res + "0";
                    res = res + (string)(mpHour[week1[i]]) + ':';
                }else{
                    res = res + (string)(mpHour[week1[i]]) + ':';
                }
                break;
            }
        }
    }


    for (int i = 0; i < time1.length(); i++)
    {
        if(time1[i] == time2[i] && isalpha(time1[i])){
            if(i < 10){
                res = res + "0";
                res = res + to_string(i);
            }else{
                res = res + to_string(i);
            }
            break;
        }   
    }
    cout<<res<<endl;
    return 0;
}