#include<stdio.h>
int a[2019] = {0};

int main()
{
	int x = 0;
	for ( int j = 0; j <= 2019; j++ )
	{
		if ( j % 9 ==0 )
		{
			a[x++] = j;
		}	
	}
	
	for ( int b = 0; b <= 2019; b++ )
	{
		if ( a[b] !=0 )
		{
//			printf("%d ",a[b]);
		}
	}//2019的倍数储存正在a数组中 
	
	int cnt = 0;
	for ( int i = 0; i < 2019 ; i++ )
	{
		if ( i%9==0 || i%10==9 || i/10==9 || i/100==9 || i/10%10==9 )
		{
			cnt += 1;
		}
		
		for( int q = 0; q <= 2019; q++ )
		{
			if ( a[q] != 0 && i % 1000 / 100 == a[q] )//i%1000/100==9的倍数
			{
				cnt +=1;
			}
			if ( a[q] != 0 && i % 100 %10 == a[q] )//i%100%10==9的倍数
			{
				cnt += 1;
			}
		} 
	}
	printf("%d\n", cnt);
	return 0;
} 
