#include<stdio.h>
// 1  2  3  4  5  6  7  8  9  11  12  13  14  15  16  17  18  19  22  23  24  25  26  27  28  29 
int main()
{
	int a[7]={0}; 
	int n ,count = 0;
	scanf("%d",&n);
	for ( int z = 1; z <= n; z++ )
	{
		int cnt = 0, tmp = z;
		while ( tmp != 0 )
		{
			tmp /= 10;
			cnt ++;//用于计数，输入的数有多少位 
		}

		int x = 0, m = 1;
		while ( x != cnt )
		{
			a[x] = z/m%10;
//			printf("%d ",a[x]);
			x += 1;
			m *= 10;
	
		}
		
//		for ( int i = 0; i < 7; i++ )
//		{
//			printf("%d ",a[i]);
//		}
//		printf("\n");
		//用于计算数组从右往左有多少个0 
		int cnt0 = -1;
		for ( int i = 7; i >= 0 && a[i] == 0; i-- )
		{
			if ( a[i] == 0 )
			{
				cnt0++;
			} 
		}
//		printf("从右往左0的个数是%d\n",cnt0);
		int flag = 1;
		for ( int i = 7-cnt0-1; i >= 1; i-- )
		{
			
			if ( a[i] > a[i-1] )
			{
				if ( i < 0 )
				{
					i = 0;
				}
				flag = 0;
			}
		}
		if ( flag == 1 )
			count += 1;
	}
	printf("%d\n",count);
	return 0;
} 
