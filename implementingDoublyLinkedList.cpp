
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
	node temp , p ;
	temp = createnode() ;
	if( head == NULL )
	{
		head = temp ;
		head->next = NULL ;
		head->prev = NULL ;
	}
	p = head ;
	while( p->next != NULL )
	{
		p = p->next ;
	}
	p->next = temp ;
	temp->prev = p ;
	temp->next = NULL ;
}

int addafter()
{
	if( head == NULL )
	{
		cout<<"\nEmpty List...\n" ;
		getch() ;
		return 0 ;
	}
	
	node temp , p , s , a ;
	int pos ;
	cout<<"\nEnter position of node after which insertion is to be done: " ;
	cin>>pos ;
	p = head ;
	for( int i = 0 ; i < pos-1 ; i++ )
	{
		p = p->next ;
		if( p == NULL )
		{
			cout<<"\nThere are less elements than the give position:\n" ;
			getch() ;
			return 0 ;
		}
	}
	temp = createnode() ;
	if( p->next == NULL )
	{
		p->next = temp ;
		temp->next = NULL ;
		temp->prev = p ;
	}
	else
	{
		temp->next = p->next ;
		temp->next->prev = temp ;         
		p->next = temp ;
		temp->prev = p ;
	}
	
	
}

void displaylist()
{
	node p ;
	system("CLS") ;
	cout<<"Elements of list are:\n" ;
	p = head ;
	cout<<"\nForward Traversal:\n" ;
	while( p != NULL )
	{
		cout<<p->data<<" -> " ;
		p = p->next ;
	}
	cout<<"NULL"<<endl ;
	
	p = head ; 
	while( p->next != NULL )
	p = p->next ;
	
	cout<<"\nBackward Traversal:\n" ;
	while( p != NULL )
	{
		cout<<p->data<<" -> " ;
		p = p->prev ;
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
		cout<<"# 1.Add Element at front       #\n# 2.Add Element at End         #\n# 3.Add element after a node   #\n# 4.Display List               #\n# 5.Exit                       #\n" ;
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
			case 3 : addafter() ;
					 system("CLS") ;	
			         break ;
			case 4 : displaylist() ;
					 break ;
			case 5 : system("CLS") ;
					 break ;		 
			default : cout<<"\n\nEnter correct choice\n" ;
					  getch() ;
					  system("CLS") ; 
					  break ;		 		 		                 
		}
	}while( choice != 6 ) ;
}
