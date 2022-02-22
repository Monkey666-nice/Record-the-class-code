//校园贷还款金额问题
//第三组
#include<stdio.h>
void main(){
	float P_money=1000; //本金
	float I_money=0; //利息
	float break_money; //违约金
	float sum_money=0; //总计还款
	int week=1; //周数
	while(week<=16){
		I_money=P_money*0.1;
		P_money=P_money+I_money; //本息
		week++; 
	} 
	break_money=1000*0.01*(120-7);
	sum_money=P_money+break_money;
	printf("总计还款要还=%f\n",sum_money);
}
