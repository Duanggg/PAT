#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main(){
    int n,m,max_fault = 0;
    scanf("%d %d",&n,&m);
    vector<set<char> > ans(m);//答案
    vector<int> value(m);
    map<int,int> fault_ans;//分值、某题错误次数
    for(int i = 0;i < m;i++){
        int p,q;
        scanf("%d %d %d",&value[i],&p,&q);
        while(q--){
            char c;
            scanf(" %c",&c);
            ans[i].insert(c);
        }
    }
    for(int i = 0;i < n;i++){
        int result = 0;
        scanf("\n");
        for(int j = 0;j < m;j++){
            int k,flag = 0;if(j)    scanf(" ");
            scanf("(%d",&k);
            if(k != ans[j].size())  flag = 1;
            while(k--){
                char c;
                scanf(" %c",&c);
                if(ans[j].find(c) == ans[j].end())  flag = 1;//没有考虑两个相同正确选项的情况
            }
            scanf(")");
            if(!flag)   result += value[j];
            else if(fault_ans.find(j) == fault_ans.end())   fault_ans[j] = 1;
            else    fault_ans[j]++;
            if(fault_ans[j] > max_fault)    max_fault = fault_ans[j];
        }
        printf("%d\n",result);
    }
    if(max_fault == 0){printf("Too simple");return 0;}
    printf("%d",max_fault);
    for(int i = 0;i < fault_ans.size();i++){
        if(fault_ans[i] == max_fault)   printf(" %d",i + 1);
    }
    return 0;
}