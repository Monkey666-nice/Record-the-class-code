//折纸
//三组
#include<stdio.h>
int main(){
	float h;
	int i;
	scanf("请输入纸的原始厚度：%f",h);
	while(h<8848.86){
		h=h*2;
		i++;
	}
	printf("%d",i);
} 


