#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std ;

typedef struct linkedlist *node ;

struct linkedlist
{
	int data ;
	node next ;
} *head ;

node createnode()
{
	node temp ;
	int value ;
	cout<<"Enter Element:" ;
	cin>>value ;
	temp = new( struct linkedlist ) ;
	temp->data = value ;
	temp->next = NULL ;
	return temp ;
}
void addatend() 
{
	node temp , p ;
	temp = createnode() ;
	if( head == NULL )
	{
		head = temp ;
		head->next = NULL ;
	}
	else
	{
		p = head ;
		while( p->next != NULL )
		{
			p = p->next ;
		}
		p->next = temp ;
		
	}
}
void displaylist()
{
	node p ;
	p = head ;
	cout<<"\nElements of List are:\n" ;
	while( p != NULL )
	{
		cout<<p->data<<" -> " ;
		p = p->next ;
	}
	cout<<"NULL"<<endl ;
	getch() ;
	system("CLS") ;
}

void sort()
{
	
}

int main()
{ 
	int value , choice ;
	do
	{
		cout<<"##################\n" ;
		cout<<"# 1.Add Element  #\n# 2.Display List #\n# 3.Sort List    #\n# 4.Exit         #  " ;
		cout<<"\n##################\n\nEnter Choice:" ;
		cin>>choice ;
		switch( choice )
		{
			case 1 : addatend() ;
			        system("CLS") ;
			         break ;
			case 2 : displaylist() ;
			         break ;
			case 3 : sort() ;
					system("CLS") ;	
			         break ;		                 
		}
	}while( choice != 4 ) ;
	
}
