//����Һ2
//�ڶ���
#include<stdio.h>
int main(){
	int x,y,z;
	for(x=1;x<=100;x++){
		for(y=1;y<=66;y++){
			for(z=1;z<=40;z++){
				if((x+y+z==100) && 5*x+15*y+25*z==1000){
					printf("����Һ%dƿ,��������%dƿ,�������%dƿ\n",x,y,z);
				}
			}
		}
	}
} 
