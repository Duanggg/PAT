#include<iostream>
#include<vector>
#include<map>
#include<set>

using namespace std;
int main(){
    int n,m,max_fault = 0;
    scanf("%d %d",&n,&m);
    vector<string> ans_str; //忽略了答案重复的情况
    vector<double> value(m);
    vector<map<char,int> > fault_ans;
    for(int i = 0;i < m;i++){   //接收正确答案输入
        int ans_num,t;
        double ans_value;
        scanf("%lf %d %d",&ans_value,&t,&ans_num);
        value.push_back(ans_value);
        string s = "";
        while(ans_num--){
            char c;cout<<"????"<<endl;
            scanf(" %c",&c);
            s = s + c;
        }
        cout<<"没问题啊"<<s<<endl;
        ans_str.push_back(s);
    }
    cout<<"gygiu--dsbjd---sdshj";
    for(int i = 0;i < n;i++){//挨个学生
        double grade = 0;
        for(int j = 0;j < m;j++){//挨个题目
            if(j != 0)  scanf(" ");
            int curAnsNum,flag = 0;
            string str = ans_str[j];
            scanf("(%d",&curAnsNum);
            for(int k = 0;k < curAnsNum;k++){//挨个答案
                char ans;
                scanf(" %c",&ans);
                //判断错误情况，存储错误答案，记录max_fault
                if(str.find(ans) == string::npos){
                    flag = 2;
                    fault_ans[j][ans]++;
                    if(max_fault < fault_ans[j][ans])   max_fault = fault_ans[j][ans];
                }
                else    str.erase(str.find(ans),1);
            }
            if(flag == 0 && str.length() == 0)   grade += value[j];
            else if(flag == 0 && str.length()){
                grade += value[j] / 2;
                for(int k = 0;k < str.length();k++){
                    fault_ans[j][str[k]]++;
                    if(max_fault < fault_ans[j][str[k]])   max_fault = fault_ans[j][str[k]];
                }
            }
            scanf(")");
        }
        printf("%.0lf\n",grade);
    }
    cout<<"---------";
    if(max_fault == 0){
        printf("Too simple");
        return 0;
    }
    for(int i = 0;i < fault_ans.size();i++){
        for(auto it = fault_ans[i].begin();it != fault_ans[i].end();it++){
            if(it->second == max_fault) printf("%d %d-%c\n",max_fault,i + 1,it->first);
        }
    }
    return 0;
}