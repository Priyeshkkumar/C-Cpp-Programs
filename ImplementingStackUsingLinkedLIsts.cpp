//Implementing Stack Using Linked Lists...

#include<iostream>
#include<stdlib.h>
#include<conio.h>

typedef struct llist *node ;

using namespace std ;

struct llist
{
	int data ;
	node next ;
} *head ; 

node createnode()
{
	int value ;
	node temp ;
	cout<<"Enter Element :" ;
	cin>>value ;
	temp = new( struct llist ) ;
	temp->data = value ;
	temp->next = NULL ;
	return temp ;
}

void push()
{
	node temp , p ;
	temp = createnode() ;
	
	if( head == NULL )
	{
		head = temp ;
	}
	else
	{
		p = head ;
		head = temp ;
		head->next = p ;
	}
	cout<<"\nElement Pushed ..\n\n" ;
	
}

void pop()
{
	node temp , p ;
	p = head ;
	if( p == NULL )
	{
		cout<<"Empty Stack.." ;
	}
	head = head->next ;
	cout<<"Popped Element is: "<<p->data ;
	free(p) ;
}

int displaylist() 
{
	node p = head ;
	cout<<"Elements of Stack are :" ;
	cout<<"Top -> " ;
	if( head == NULL )
	{
		cout<<"Empty Stack..." ;
		return 0 ;
	}
	while( p != NULL )
	{
		cout<<p->data<<" " ;
		p = p->next ;
	}
	cout<<" ->Bottom" ;
}

int main()
{
	int choice ;
	do
	{
		cout<<"###### STACK #####\n#                #\n" ;
		cout<<"# 1.PUSH         #\n# 2.POP          #\n# 3.Display List #\n# 4.Exit         #\n" ;
		cout<<"##################\n\nEnter Choice:" ;
		cin>>choice ;
		switch( choice )
		{
			case 1 : push() ;
					 getch() ;
			         system("CLS") ;
			         break ;
			         
			case 2 : pop() ;
					 getch() ;
			  		 system("CLS") ;
			         break ;
			         
			case 3 : displaylist() ;
			   		 getch() ;
					 system("CLS") ;	
			         break ;
			         
			case 4 : return 0  ;
					 break ;
					 	 
			default : cout<<"\n\nEnter correct choice\n" ;
					  getch() ;
					  system("CLS") ; 
					  break ;		 		 		                 
		}
	}while( choice != 6 ) ;
	
	return 0 ;	
}
