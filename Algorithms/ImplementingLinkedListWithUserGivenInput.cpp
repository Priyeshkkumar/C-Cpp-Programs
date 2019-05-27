#include<iostream>

using namespace std ;

typedef struct linkedlist *node ;

struct linkedlist
{
	int data ;
	struct linkedlist *next ;
} *head ;

node addnode()
{
	int value ;
	cin>>value ;
	node temp , p ;
	temp = new(struct linkedlist) ;
	temp->data = value ;
	temp->next = NULL ;
	if( head == NULL )
	head = temp ;
	
	else 
	{
		p = head ;
		while( p->next != NULL )
		p = p->next ;
		
		p->next = temp ;
	}
}

int main()
{
	addnode() ;
	addnode() ;
	addnode() ;
	while( head != NULL )
	{
		cout<<head->data ;
		head = head->next ;
	}
}
