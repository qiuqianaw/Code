#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct Student
{
	char name[10] ;
	struct Student *next ;
} ;


struct Student *create()
{
	struct Student *head ,*next, *current ;
	char str[10] ;
	char flag ;
	
	printf( "Please input name:\n" ) ;
	scanf( "%s" , str ) ;
	getchar() ;
	
	head = (struct Student *) malloc ( sizeof(struct Student) ) ;
	strcpy( head->name , str ) ; 
	
	current = head ;
	
	printf( "continue?(Y/N)\n" ) ;
	scanf( "%c" , &flag ) ;
	
	
	while( flag != 'N' )
	{
		printf( "Please input name:\n" ) ;
		scanf( "%s" , str ) ;
		getchar() ;
		
		next = ( struct Student * ) malloc ( sizeof(struct Student) ) ;
		strcpy( next->name , str ) ;
		
		current->next = next ;
		current = next ;
		
		printf( "continue?(Y/N)\n" ) ;
		scanf( "%c" , &flag ) ;
	}
	
	current->next = NULL ;
	
	return head ;
} 


void list( struct Student *p )
{
	while( p )
	{
		printf( "%s\n" , p->name ) ;
		p = p->next ;
	}
}


void main()
{
	struct Student *p ;
	
	p = create() ;
	
	list( p ) ;
}
