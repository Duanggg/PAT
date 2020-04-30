
#include<stdio.h>
#include<algorithm>
using namespace std;
long long  gcd(long long  a,long long  b){
  if(b==0)return a;
  else return gcd(b,a%b);
}
void show(long long up,long long down){
	long long d;
	if(down<0){up=-up;down=-down;}
    d=gcd(labs(up),labs(down));
    up/=d; down/=d;
	if(up<0)printf("(");
	if(up==0)printf("0");
    else if(down==1)printf("%lld",up);
    else if( labs(up)>labs(down) )printf("%lld %lld/%lld",up/down,labs(up)%down,down);
    else printf("%lld/%lld",up,down);
	if(up<0)printf(")");
}
int main(){
long long  up1, up2, down1, down2;
long long  up=0, down=1;
  scanf("%lld/%lld %lld/%lld",&up1,&down1,&up2,&down2);
  // +
  up=up1*down2+down1*up2;
  down=down1*down2;
  show(up1,down1);printf(" + ");show(up2,down2);printf(" = ");show(up,down);printf("\n");
  //  -
  up=up1*down2-down1*up2;
  down=down1*down2;
  show(up1,down1);printf(" - ");show(up2,down2);printf(" = ");show(up,down);printf("\n");
  //  *
  up=up1*up2;
  down=down1*down2;
  show(up1,down1);printf(" * ");show(up2,down2);printf(" = ");show(up,down);printf("\n");
  //  /
  if(up2==0){show(up1,down1);printf(" / ");show(up2,down2);printf(" = ");printf("Inf\n");}
  else{
  up=up1*down2;
  down=down1*up2;
  show(up1,down1);printf(" / ");show(up2,down2);printf(" = ");show(up,down);printf("\n");
  }
return 0;
}