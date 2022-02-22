//消毒液2
//第一组
#include<stdio.h>
int main(){
	int x,y,z;
	for(x=1;x<=100;x++){
		for(y=1;y<=100;y++){
			for(z=1;z<=100;z++){
				if((x+y+z==100) && 5*x+15*y+25*z==1000){
					printf("消毒液%d瓶,消毒凝胶%d瓶,消毒喷剂%d瓶\n",x,y,z);
				}
			}
		}
	}
} 
