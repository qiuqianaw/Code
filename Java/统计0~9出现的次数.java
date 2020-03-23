package hello;

import java.util.Scanner;

public class Hello {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		//统计0~9出现的次数
		int x ;
		int [] a = new int [10];
		x = in.nextInt();
		while( x!=-1 )
		{
			if( x>=0 && x<=9 )
			{
				a[x]++;
			}
			x = in.nextInt();
		}
		for( int i=0; i<a.length; i++)
		{
			System.out.println(i+":"+a[i]);
		}
	}
}
