#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	char *p;
	
	gets(s);
	int len=strlen(s);
	
	char ch;
	scanf("%c",&ch);
	
	for(p=s;p<=&s[len-1];p++){
		if(*p==ch){
			*p=' ';
		}
	}
	
	for(p=s;p<=&s[len-1];p++){
		if(*p!=' '){
			printf("%c",*p);
		}
	}
	printf("\n");
} 
