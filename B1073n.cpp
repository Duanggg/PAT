#include<iostream>
#include<vector>
#include<map>
#include<set>

using namespace std;
int main(){
    int n,m,max_fault = 0;
    scanf("%d%d",&n,&m);
    vector<set<char> > ans(m);
    vector<string> ans_str; 
    vector<double> value(m);
    vector<map<char,int> > fault_ans;
    for(int i = 0;i < m;i++){
        int ans_num,t,ans_value;
        scanf("%lf %d %d",&ans_value,&t,&ans_num);
        value.push_back(ans_value);
        string s = "";
        while(ans_num--){
            char c;
            scanf(" %c",&c);
            ans[i].insert(c);
            s = s + c;
        }
    }
    for(int i = 0;i < n;i++){
        if(i != 0)  scanf(" ");
        double grade = 0;int t,flag = 0;
        scanf("(%d",&t);
        if(t > ans[i].size())  flag = 2;
        for(int j = 0;j < t;j++){
            char c;string cmp = ans_str[i];
            scanf(" %c",&c);
            if(ans[i].find(c) == ans[i].end())  {
                flag = 2;
                fault_ans[j][c]++;
            }//完全错误
            else    cmp.erase(cmp.find(c),1);
        }
        // for(int k = 0;k < cmp.size)
        if(flag == 0 && t < ans[i].size()) flag = 1;    //不完全正确
        if(!flag)   grade += value[i];
        else if(flag == 1)  grade += value[i] / 2;
    }

    return 0;
}