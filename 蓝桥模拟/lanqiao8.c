/*
小明想知道，满足以下条件的正整数序列的数量：
　　1. 第一项为 n；
　　2. 第二项不超过 n；
　　3. 从第三项开始，每一项小于前两项的差的绝对值。
　　请计算，对于给定的 n，有多少种满足条件的序列。

输入格式
　　输入一行包含一个整数 n。
输出格式
　　输出一个整数，表示答案。答案可能很大，请输出答案除以10000的余数。
样例输入
4
样例输出
7
样例说明
　　以下是满足条件的序列：
　　4 1
　　4 1 1
　　4 1 2
　　4 2
　　4 2 1
　　4 3
　　4 4
*/
#include<stdio.h>
int f( int n )
{
	if ( n = 2 )
	{
		int cnt2 = 0
		for ( int i = 1; i <= n; i++ )
		{
			cnt2 += 1;
		} 
		return cnt2;
	}
	if ( n >= 3 )
	{
		return 
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n]; 
	return 0;
}
