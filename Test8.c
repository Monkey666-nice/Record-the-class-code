//消毒液
#include<stdio.h>
int main(){
	int i,j; //i为购买的消毒液数量，j为购买的消毒凝胶数量
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i+j==5 && i*10+j*35==100){
				printf("%d,%d\n",i,j);
			}
		}
	} 
	return 0;
} 
