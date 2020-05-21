#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main() {
    vector<int> odd;
    vector<int> yu1;
    vector<int> yu2;
    vector<int> yu3;
    vector<int> yu4;
    int total,num;
    cin>>total;
    while (total --)
    {
        cin>>num;
        if(num % 5 == 0 && num % 2 == 0){
            odd.push_back(num);
        } else if(num % 5 == 1) {
            yu1.push_back(num);
        }else if(num % 5 == 2){
            yu2.push_back(num);
        }else if(num % 5 == 3){
            yu3.push_back(num);
        }else if(num % 5 == 4){
            yu4.push_back(num);
        }
    }

    int num1 = 0;
    if(odd.size() == 0){
        cout<<'N';
    }else{
        for (int i = 0; i < odd.size(); i++)
        {
            num1 = num1 + odd[i];
        }
        cout<<num1;
    }


    int num2 = 0;
    if(yu1.size() == 0){
        cout<<" "<<'N';
    }else{
        for (int i = 0; i < yu1.size(); i++)
        {
            if(i%2 == 0){
                num2 = num2 + yu1[i];
            }else {
                num2 = num2 - yu1[i];
            }
        }
        cout<<" "<<num2;
    }
    

    if(yu2.size() == 0){
        cout<<" "<<'N';
    }else{
        cout<<" "<<yu2.size();
    }

    float num3 = 0;
    if(yu3.size() == 0){
        cout<<" "<<'N';
    }else{
        for (int i = 0; i < yu3.size(); i++)
        {
            num3 = num3 + yu3[i];
        }
        num3 = num3/yu3.size();
        printf(" %.1f", num3);
    }



    if(yu4.size() == 0){
        cout<<" "<<'N';
    }else{
        sort(yu4.begin(),yu4.end(),cmp);
        cout<<" "<<yu4[0];
    }
    return 0;
}