#include<stdio.h>
int x = 0; a[10000] = {0};
for ( int j = 0; j < 10000; j++ )
{
	if ( j % 9 ==0 )
	{
		a[x++] = j;
	}
}

int main()
{
	for ( int b = 0; b < length.a; b++ )
	{
		
	}
	int cnt = 0;
	for ( int i = 0; i < 2019 ; i++ )
	{
		if ( i%9==0 || i%10==9 || i/10==9 || i/100=9 || i/10%10==9 || 
			i%1000/100==9的倍数 || i%100%10==9的倍数 )
		{
			cnt += 1;
		}
		
		
	}
	printf("%d\n", cnt);
	return 0;
} 
