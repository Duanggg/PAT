// #include<map>
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int main(){
//     int n,m;
//     // map<int,int> mp;
//     cin>>n>>m;
//     vector<int> v;
//     for(int i = 0;i < n;i++){
//         int a,b;
//         cin>>a>>b;
//         v.push_back(a);
//         v.push_back(b);
//     }
//     for(int i = 0;i < m;i++){
//         int k;
//         cin>>k;
//         vector<int> frd;
//         bool flag = true;
//         for(int j = 0;j < k;j++){
//             int thg;
//             cin>>thg;
//             // if(frd.find(thg) != frd.end())  flag = false;
//             if(find(frd.begin(),frd.end(),thg) != frd.end())  {
//                 flag = false;
//                 break;
//             }
//             // auto it = v.find(thg);
//             auto it = find(v.begin(),v.end(),thg);
//             if(it != v.end()){
//                 if((it - v.begin()) % 2 == 0)   frd.push_back(*(it + 1));
//                 else    frd.push_back(*(it - 1));
//             }
//         }
//         if(flag)    cout<<"Yes"<<endl;
//         else    cout<<"No"<<endl;
//     }
//     return 0;
// }
#include<map>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n,m;
    map<int,vector<int> > mp;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        int a,b;
        cin>>a>>b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    while(m--){
        int k,cur,flag = 0;
        cin>>k;
        int hash[100000] = {0};
        vector<int> v(k);
        for(int i = 0;i < k;i++){
            cin>>cur;hash[cur] = 1;v.push_back(cur);
        }
        for(int i = 0;i < k;i++){
            if(mp.find(v[i]) != mp.end()){
                for(int j = 0;j < mp[v[i]].size();j++){
                    if(hash[mp[v[i]][j]])   {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if(flag)    cout<<"No"<<endl;
        else    cout<<"Yes"<<endl;
    }
    return 0;
}