//要给100个大一新生设置学号
 //用while循环
 #include<stdio.h>
 int main(){
 	int i=1,a[100],id=2021000;
 	while(i<=100){
 		a[i]=++id;
 		printf("第%d个同学=%d\n",i,a[i]);
		i++;
 	}
 	return 0;
 }

  


