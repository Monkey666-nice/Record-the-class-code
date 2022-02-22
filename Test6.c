//毁约金计入本金继续循环
#include<stdio.h>
void main(){
	float money1=1000,money2=0; //money1是本金，money2是毁约金
	int week=2; //周数，约定一周后还款，否则毁约
	float money3=money1+0.1*money1; //一周后还款金额
	while(week<=16){
		money2=money3*0.01*7;
		money3=money3+money2+(money3+money2)*0.1;
		week++;
	} 
	printf("money3=%f\n",money3);
}

