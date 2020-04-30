#include<stdio.h>
#include<stdio.h>
#include<iostream>
#include<map>

using namespace std;
// bool game(char a,char b){
    
// }
int main(){
    int n;
    map<char,int> mp;
    mp['C'] = 1;
    mp['J'] = 0;
    mp['B'] = -1;
    scanf("%d",&n);
   map<char,int> recrd_a,recrd_b;
    int max_a = 0,max_b = 0;
    char m_a = 'Z',m_b = 'Z';
    int win_a = 0,win_b = 0,p = 0;    
    while(n--){
        char a,b;
        cin>>a>>b;
        if(mp[a] > mp[b] || (a == 'B' && b == 'C')){
            //甲赢，记录甲的手势,甲赢次数+1
            cout<<endl<<"a : "<<a<<"   b: "<<b<<endl;
            recrd_a[a]++;
            if(recrd_a[a] > max_a){
                max_a = recrd_a[a];
                if(a < m_a){
                    m_a = a;
                }
            }
            win_a++;
        }
        else if(mp[b] > mp[a] || (b == 'B' && a == 'C')){
            recrd_b[b]++;
            if(recrd_b[b] > max_b){
                max_b = recrd_b[b];
                if(b < m_b){
                    m_b = b;
                }    
            }
            win_b++;
        }
        else if(b == a){
            p++;
        }
    }
    cout<<win_a<<" "<<p<<" "<<win_b<<endl;
    cout<<win_b<<" "<<p<<" "<<win_a<<endl;
    // cout<<m_a<<" "<<m_b;
    printf("%c %c",m_a,m_b);
    return 0;
}


// a 和 b  先取到a能赢的字符
// function res(type){
//     if(type === 'c'){
//         return 'b'
//     }else if(type === 'b'){
//         return 'j'
//     }else{
//         return 'c'
//     }
// }

// // 0:win 1:ping 2:lose
// let jiaRes = [0,0,0]
// let yiRes = [0,0,0]
// let arr = [['c','j'],['j','b']]
// arr.forEach(v=> {
//     if(v[0] === v[1]){

//     }
//     let winRes = res(v[0])
//     if(v[1] === winRes){

//     }else{

//     }
// })

let jiaRes= {
    win: 0,
    ping: 0,
    lose: 0,
    q: 0,
    b: 0,
    j: 0,
}

let yiREs = jiaREs