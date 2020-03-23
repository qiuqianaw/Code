#include<stdio.h>
int cnt = 0;
int a[7] = {-1};

int f2( int n )
{
	int temp = n;
	a[0] = temp%10;//个位数 
	a[1] = (n - a[0]) / 10;//十位数 
//	printf("%d %d\n" ,a[0], a[1]);
	for ( int i = 0; i < 7; i++ )
	{
		if ( a[i] != -1 && a[i+1] < a[1] )
		{
			
		}
	}
}

int f3( int n )
{
//	char nc = n%10+48;
	putchar(n+'0');
//	int temp = n;
//	a[0] = temp%10;//个位数 
//	a[1] = (n - a[0]) / 10;//十位数 
//	a[2] = a[1]/100;//百位数 
//	printf("%d\n%d\n%d\n" ,a[0], a[1], a[2]);
//	for ( int i = 0; i < 7; i++ )
//	{
//		if ( a[i] != -1 && a[i+1] < a[1] )
//		{
//			return 1;
//			break;
//		}
//	}
}

int main()
{
	int n;
	scanf("%d",&n);
	f3(n);
	return 0;
}
