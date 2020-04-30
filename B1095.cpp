//start 5:19
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
// #include<pair>
using namespace std;
struct stu{
    string id,type,kc,date,sid;
    int grade;
};
bool cmp(stu a,stu b){
    // a.grade == b.grade?return a.grade < b.grade : return a.id < b.id;
    if(a.grade == b.grade)  return a.grade < b.grade;
    else    return a.id < b.id;
}
bool cmpk(pair<string,int> a,pair<string,int> b){
    // a.second == b.second ? return a.second > b.second : return a.first < b.first;
    if(a.second == b.second)    return a.second > b.second;
    else a.first < b.first;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<stu> v;
    for(int i = 0;i < n;i++){
        stu s;
        cin>>s.id;
        s.type = s.id.substr(0,1);
        s.kc = s.id.substr(1,3);
        s.date = s.id.substr(4,6);
        s.sid = s.id.substr(10,3);
    }
    // vector<string,int> k;
    unordered_map<string,int> k;
    for(int i = 0;i < m;i++){
        int t,flag = 0;
        cin>>t;
        string a;
        cin>>a;
        if(t == 1){
            sort(v.begin(),v.end(),cmp);
            cout<<"Case 1: "<<a<<endl;
            for(int j = 0;j < v.size();j++){
                if(v[j].type == a)  {cout<<v[j].id<<" "<<v[j].grade<<endl;flag = 1;}
            }
        }else if(t == 2){
            cout<<"Case 2: "<<a<<endl;
            int sum = 0,num = 0;
            for(int j = 0;j < v.size();j++){
                if(v[i].kc == a){
                    sum += v[i].grade;
                    num++;
                    flag = 1;
                }
            }
            cout<<num<<" "<<sum<<endl;
        }
        // else if(t == 3){
        //     cout<<"Case 3: "<<a<<endl;
        //     for(int j = 0;j < v.size();j++){
        //         if(v[j].date == a){
        //             flag = 1;
        //             if(k.find(v[j].kc) == k.end())  k[v[j].kc] = 1;
        //             else    k[v[j].kc]++;
        //         }
        //     }
        //     sort(k.begin(),k.end(),cmpk);
        //     for(unordered_map<string,int>::iterator it = k.begin();it != k.end();it++){
        //         cout<<it->first<<" "<<it->second<<endl;
        //     }
        // }
        if(flag == 0)   cout<<"NA"<<endl;
    }
    return 0;
}