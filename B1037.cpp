
#include <stdio.h>
//29*Knut=Sickle,17*Sickle=Galleon
int main(){
	int p1,p2,p3,pay;//pay
	int a1,a2,a3,accept;//aceept
	int change;
	scanf("%d.%d.%d %d.%d.%d",&p1,&p2,&p3,&a1,&a2,&a3);
	pay=p1*29*17+p2*29+p3;
	accept=a1*29*17+a2*29+a3;
	change=accept-pay;//找零 
	if(change<0){
		printf("-");
		change*=-1;
	}
	//printf("%d\n",change); 
		printf("%d.%d.%d",change/(17*29),change%(17*29)/29,change%29); 
	return 0;
}
