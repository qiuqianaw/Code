#include<stdio.h>
#include<string.h>
int main(){
	char s[100],y;
	char *p;
	
	while(1){
		gets(s);
		int len=strlen(s);
		
		char ch;
		scanf("%c",&ch);
		
		if(ch>='a'&&ch<='z'){
			for(p=s;p<=&s[len-1];p++){
				if(*p==ch){
					y=*p-32;
					*p=y;
				}
			}
		puts(s);
		printf("\n");
		}
	}
} 
