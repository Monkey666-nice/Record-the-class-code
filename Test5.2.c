//У԰������������
//�ڶ���
#include<stdio.h>
void main(){
	float money=1000; //����
	int week; //������Լ��һ�ܺ󻹿�
	while(week<=16){
		money=money+money*0.1;
		week++;
	} 
	money=money+1000*0.01*(120-7);
	printf("money=%f\n",money);
}
