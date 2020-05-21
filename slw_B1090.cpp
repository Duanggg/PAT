#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <regex>
using namespace std;

int main(){
    int n,m;
    int n1,n2;
    scanf("%d %d",&n,&m);
    map<int, vector<int> > eq;
    while (n--)
    {
       cin>>n1>>n2;
        eq[n2].push_back(n1);
        eq[n1].push_back(n2);
    }

    while (m--)
    {
        int times;
        bool flag =false;
        int generate[100000] = {0};
        cin>>times;
        vector<int> arr;
        while (times--)
        {
            cin>>n1;
            arr.push_back(n1);
            generate[n1] = 1;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < eq[arr[i]].size(); j++)
            {
                if(generate[eq[arr[i]][j]] == 1){
                    flag = true;
                }
            }
        }
        if(flag){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
    return 0;
}


