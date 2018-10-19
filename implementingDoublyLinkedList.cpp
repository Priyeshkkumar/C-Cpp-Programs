
// Implementing Doubly Linked List...

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std ;

typedef struct DLL *node ;

struct DLL
{
	int data ;
	node next ;
	node prev ;
} *head;

node createnode()
{
	node temp ;
	int value ;
	temp = new( struct DLL ) ;
	cout<<"\nEnter Element:" ;
	cin>>value ;
	temp->data = value ;
	temp->next = NULL ;
	temp->prev = NULL ;
}

void addfront()
{
	node temp , p ;
	temp = createnode() ;
	temp->next = head ;
	temp->prev = NULL ;
	if( head != NULL )
	head->prev = temp ;
	
	head = temp ;
}

void addatend()
{	
}

void addafter()
{
}

void addbefore()
{
}

void displaylist()
{
	node p ;
	system("CLS") ;
	cout<<"Elements of list are:\n" ;
	p = head ;
	while( p != NULL )
	{
		cout<<p->data<<" -> " ;
		p = p->next ;
	}
	cout<<"NULL"<<endl ;
	getch() ;
	system("CLS") ;
}

int main()
{
	head = NULL;
	int value , choice ;
	do
	{
		cout<<"####Doubly Linked List##########\n#                              #\n" ;
		cout<<"# 1.Add Element at front       #\n# 2.Add Element at End         #\n# 3.Add element after a node   #\n# 4.Add element before a node: #\n# 5.Display List               #\n# 6.Exit                       #\n" ;
		cout<<"################################\n\nEnter Choice:" ;
		cin>>choice ;
		switch( choice )
		{
			case 1 : addfront() ;
			         system("CLS") ;
			         break ;
			case 2 : addatend() ;
			  		 system("CLS") ;
			         break ;
			case 3 : addfront() ;
					 system("CLS") ;	
			         break ;
			case 4 : addbefore() ;
					 system("CLS") ;
					 break ;
			case 5 : displaylist() ;
					 break ;
			case 6 : system("CLS") ;
					 break ;		 
			default : cout<<"\n\nEnter correct choice\n" ;
					  getch() ;
					  system("CLS") ; 
					  break ;		 		 		                 
		}
	}while( choice != 6 ) ;
}
