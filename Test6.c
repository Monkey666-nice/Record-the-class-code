//��Լ����뱾�����ѭ��
#include<stdio.h>
void main(){
	float money1=1000,money2=0; //money1�Ǳ���money2�ǻ�Լ��
	int week=2; //������Լ��һ�ܺ󻹿�����Լ
	float money3=money1+0.1*money1; //һ�ܺ󻹿���
	while(week<=16){
		money2=money3*0.01*7;
		money3=money3+money2+(money3+money2)*0.1;
		week++;
	} 
	printf("money3=%f\n",money3);
}

