#include<stdio.h>

void mySwap(int *,int *);

int main()
{
	int a=2,b=3;

	mySwap(&a,&b);
}

void mySwap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("%d %d",*a,*b);
}
