#include<stdio.h>
int main(void){
	const int z = 80.0;    //�ٽ��Ϊ80h 
	
	printf("�����뱾�¹���ʱ��(h):");
	
	double n , y = 0.0;
	scanf("%lf" , &n);
	
	if(n < z)
		y = n * 13;
	else
		y = 1040 + (n - z) * 14;
	
	printf("���¹���Ϊ:%.2fԪ\n" , y);
	
}
