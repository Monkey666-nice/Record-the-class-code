//����Һ2
//������
#include<stdio.h>
int main(){
	int x,y,z;
	for(y=1;y<=66;y++){
		for(z=1;z<=40;z++){
			x=100-y-z;
			if(5*x+15*y+25*z==1000){
				printf("����Һ%dƿ,��������%dƿ,�������%dƿ\n",x,y,z);
			}
		}
	}
} 
