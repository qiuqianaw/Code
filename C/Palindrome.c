#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];//声明一个字符串 
	
	gets(a);//输入字符串 
	
	int len=strlen(a);//求长度 
	char *p,*q;//声明两个指针 
	
	p=a;//字符串首地址 
	q=&a[len-1];//字符串末地址 
	
	int i;
	for(i=0;i<=len/2;i++)//从首、末指针开始判断 
	{
		if(*p!=*q)
		{
			printf("No");
			break;
		}
		else
		{
			printf("Yes");
			break;
		}
		p++;//首地址向后移动一位 
		q--;//末地址向前移动一位 
	}
	return 0; 
}

