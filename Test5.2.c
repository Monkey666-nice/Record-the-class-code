//校园贷还款金额问题
//第二组
#include<stdio.h>
void main(){
	float money=1000; //本金
	int week; //周数，约定一周后还款
	while(week<=16){
		money=money+money*0.1;
		week++;
	} 
	money=money+1000*0.01*(120-7);
	printf("money=%f\n",money);
}
