#include<stdio.h>
int main(void){
	const int z = 80.0;    //临界点为80h 
	
	printf("请输入本月工作时长(h):");
	
	double n , y = 0.0;
	scanf("%lf" , &n);
	
	if(n < z)
		y = n * 13;
	else
		y = 1040 + (n - z) * 14;
	
	printf("本月工资为:%.2f元\n" , y);
	
}
