#include <iostream>
#include <algorithm>
using namespace std;

struct stu
{
    string name, number;
    int grade;
}S[10000];

bool cmp(stu a,stu b){
    return a.grade > b.grade;
}

int main(){        
    int total;
    cin>> total;
    for (int i = 0; i < total; i++)
    {
        cin>>S[i].name>>S[i].number>>S[i].grade;
    }
    sort(S, S + total, cmp);
    cout<<S[0].name<<" "<<S[0].number<<endl;
    cout<<S[total - 1].name<<" "<<S[total-1].number;
    return 0;
}