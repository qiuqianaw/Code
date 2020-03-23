#include<stdio.h>

void showBar(char ch,int n);

int main(void)
{
	char ch1;
	int n;
	
	scanf("%c%d",&ch1,&n);
	
	showBar(ch1,n);
}

void showBar(char ch,int n)//变量要写在参数列表 
{	
	int i;
	for(i=0;i<n;i++)
		printf("%c",ch);
	printf("\n");
}
