//校园贷还款金额问题
//第一组
#include<stdio.h>
int main(){
	float money=1000;
	int week=1;
	while(week<=16){
		money=money+money*0.1;
		week++;
	}
	printf("%f",money);
	return 0;
} 
