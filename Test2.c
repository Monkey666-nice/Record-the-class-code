//输入一个确定值，计算其累加值
//没有加花括号 
#include<stdio.h>
int main(){
	int i=1,n,sum=0;
	scanf("%d",&n);
	while(i<=n)
		sum=sum+i;
		i++;
	printf("sum=%d\n",sum);
	return 0;
}
