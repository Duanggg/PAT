#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a[4],b[4];
    while(1){
        int temp = n;
        int bg = 0,sml = 0;
        for(int i = 0;i < 4;i++){
            a[i] = temp % 10;
            temp = temp / 10;
        }
        sort(a,a + 4);
        for(int i = 0;i < 4;i++){
            sml = sml * 10 + a[i];
            bg = bg * 10 + a[3 - i];
        }
        if(bg == sml){
            printf("%04d - %04d = 0000\n",bg,sml);
            return 0;
        }
        n = bg - sml;
        // if(n == 6174){}
        printf("%04d - %04d = %04d\n",bg,sml,n);
        if(n == 6174){
            return 0;
        }
    }
}