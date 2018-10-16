

//Menu Driven Program Implementing Manipulations in Singly linked list..

#include<iostream>

using namespace std ;

typedef struct linkedlist *node ;

struct linkedlist
{
	int data ;
	struct linkedlist *next ;
} *head ; 

node createnode()
{
	node temp ;
	int value ;
	cout<<"\nEnter Element to be added: " ;
	cin>>value ;
	temp = new( struct linkedlist ) ;
	temp->data = value ;
	temp->next = NULL ;
	return temp ;
	
}

void addatbegin()
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
	cout<<"\nElement added at beginnig ..\n\n" ;
	
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
void addatpos() 
{
	node temp , p , s ;
	int pos , noe = 0 ;
	cout<<"Enter position of new element: " ;
	cin>>pos ;
	temp = createnode() ;
	
	s = head ; 
	while( s->next != NULL )
	{
		s = s->next ;
		noe++ ;
	}
	
	if( pos == 1 )
	{
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
	}
	else if( pos > 1 && pos <= noe )
	{
		s = head ;
		for( int i = 1 ; i < pos ; i++ )
		{
			p = s ;
			s = s->next ;
		}
		p->next = temp ;
		temp->next = s ;
	}
	
}
int deletenode() 
{
	
	node temp , s , p;
	int pos , noe = 0 ;
	
	if( head == NULL )
	{
		cout<<"\nEmpty List...\n" ;
		return 0 ;
	}
	
	s = head ;
	
	while( s->next != NULL )
	{
 		s = s->next ;
		noe++ ;
	}
	
	cout<<"\nEnter position of node to be deleted:" ;
	cin>>pos ;
	
	if(  pos >0 && pos <= noe++ )
	{
		s = head ;
		for( int i = 1 ; i < pos ; i++ )
		{
			p = s ;
			s = s->next ; 
		}
		p->next = s->next ;
		
		cout<<"\nNode Deleted...\n" ;
	}
	else
	cout<<"\nPosition out of range...\n" ;
	
}
void updatenode() 
{
	if( head == NULL )
	{
		cout<<"Empty List..." ;
	}
	int pos , value , noe = 0 ;
	node temp , p , s  ;
	s = head ;
	while( s->next != NULL )
	{
		s = s->next ;
		noe++ ;
	}
	cout<<"\nEnter position of node ,to be updated: " ;
	cin>>pos ;
	cout<<"\nEnter new value: " ;
	cin>>value ;
	
	s = head ;
	
	if( pos>0 && pos<=noe )
	{
		for( int i = 1 ; i < pos ; i++ )
		{
			s = s->next ;
		}
		s->data = value ;
	}
	cout<<"\nNode Updated..\n" ;
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
}


int main()
{
	int choice ;
	do
	{
	cout<<"\nEnter Choice:\n1.Insert Element in Beginning:\n2.Insert Element at End:\n3.Insert Element at position:\n4.Delete a Particular Node:\n5.Update Node Value:\n6.Display List:\n7.Exit:\t ";
	cin>>choice ;
	switch(choice)
	{
		case 1 : addatbegin();
		         break ;
		case 2 : addatend() ;
		         break ;
		case 3 : addatpos() ;
                 break ;
		case 4 : deletenode() ;
		         break ;
		case 5 : updatenode() ;
				 break ;
		case 6 : displaylist() ;
		         break ; 		 		    		 		    		        
		default : return 0 ;
	}
	}while(choice != 7) ;
}
