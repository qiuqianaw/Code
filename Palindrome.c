#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];//����һ���ַ��� 
	
	gets(a);//�����ַ��� 
	
	int len=strlen(a);//�󳤶� 
	char *p,*q;//��������ָ�� 
	
	p=a;//�ַ����׵�ַ 
	q=&a[len-1];//�ַ���ĩ��ַ 
	
	int i;
	for(i=0;i<=len/2;i++)//���ס�ĩָ�뿪ʼ�ж� 
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
		p++;//�׵�ַ����ƶ�һλ 
		q--;//ĩ��ַ��ǰ�ƶ�һλ 
	}
	return 0; 
}

