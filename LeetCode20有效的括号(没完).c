#include<stdio.h>
#include<string.h>
int main(void){
	char s[100];
	char *p;
	char *q;
	gets(s);
	
	int flag = 0;
	for(p = s , q = &s[strlen(s) - 1] ; p <= &s[strlen(s) - 1] , q >= s ; p++ , q--){
			if(*p == '(' && *q == ')')
				flag = 1;
			if(*p == '[' && *q == ']')
				flag = 1;
			if(*p == '{' && *q == '}')
				flag = 1;
	}
	
	for(p = s ; p <= &s[strlen(s) - 1] && *p == *(p + 1); p++){
		flag = 1;
	}
	
	if(flag == 1)
		printf("true\n");
	if(flag == 0)
		printf("false\n");
}
