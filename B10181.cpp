#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;
struct player{
    int win = 0;
    int lose = 0;
    int ping = 0;
    // int C = 0,B = 0,J = 0;
    int arr[3] = {0,0,0};
}
char game(char a){
    if(a == 'C') return 'J';
    else if(a == 'B') return 'C';
    else if(a == 'J') return 'B';
    else return 'N';
}

int main(){
    int n;
    scanf("%d",&n);
    player j,y;
    while(n--){
        char a,b;
        cin>>a>>b;
        if(a == b){
            j.ping++;
            y.ping++;
        }
        else if(game(a) == b){
            //甲赢
            j.win++;
            y.lose++;
            // if(a == 'C') j.c++;
            // else if(a == 'B') j.b++;
            // else j.j++;
            if(a == 'C') arr[1]++;
            else if(a == 'B') arr[0]++;
            else arr[2]++;
        }else{
            j.lose++;
            y.win++;
            // if(b == 'C') y.c++;
            // else if(b == 'B') y.b++;
            // else y.j++;
            if(b == 'C') arr[1]++;
            else if(b == 'B') arr[0]++;
            else arr[2]++;
        }
    }
    cout<<j.win<<" "<<j.ping<<j.lose<<endl<<j.lose<<" "<<j.ping<<" "<<j.win<<endl;
    
    // int max_a = 0,max_b = 0;
    // char m_a,m_b;
    // for(int i=0;i<3;i++){
    //     if(max_a < j.b) {
    //         max_a = j.b;
    //         m_a = 'B';
    //     }
    //     else if(max_a <j.j){
    //         max_a = j.j;
    //         m_a = 'J';
    //     }
    //     else if(max_a < j.c){
    //         max_a = j.c;
    //         m_a = 'C';
    //     }
    // }

    return 0;
}

let nArr = [0,1]
for(let i=0; i<nArr.elngth;i++){
    
}

let arr = [5,2,3]
let num = 0
arr.forEach((v,i) => {
    if(arr[num] < arr[i + 1]){
        num = i + 1
    }
})

char res = enm[0]