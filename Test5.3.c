//У԰������������
//������
#include<stdio.h>
void main(){
	float P_money=1000; //����
	float I_money=0; //��Ϣ
	float break_money; //ΥԼ��
	float sum_money=0; //�ܼƻ���
	int week=1; //����
	while(week<=16){
		I_money=P_money*0.1;
		P_money=P_money+I_money; //��Ϣ
		week++; 
	} 
	break_money=1000*0.01*(120-7);
	sum_money=P_money+break_money;
	printf("�ܼƻ���Ҫ��=%f\n",sum_money);
}
