//while∫Õdo...while—≠ª∑
//2°¢do...while 
#include<stdio.h> 
int main(){
	int i,sum=0;
	printf("i=?");
	scanf("%d",&i);
	do{
		sum=sum+i;
		i++;
	}while(i<=10);
	printf("sum=%d\n",sum);
}
