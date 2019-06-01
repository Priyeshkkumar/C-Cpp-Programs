#include<iostream>

#define Max 10 
typedef struct ll *node ;

using namespace std ;

int insert() ;
int hashfunction(int) ;
void displaye() ;

struct ll
{
    int data ;
    struct ll *next ;
} *head[Max] ;

int main()
{	int choice ;
	do
	{
	cout<<"\nEnter Choice:\n1.Insert Element \n2.Display List:\n3.Exit:\t ";
	cin>>choice ;
	switch(choice)
	{
        case 1 : insert() ;
                 break ;
		case 2 : displaye() ;
		         break ; 		 		    		 		    		        
		default : return 0 ;
	}
	}while(choice != 3 ) ;

    return 0 ;
}

void displaye()
{
    cout<<"Elements are:" ;
    for( int i = 0 ; i < Max ; i++ )
    {
        node p = head[i] ;
        cout<<head[i]->data<<"->" ;
        while( p->next != NULL )
        {
            cout<<p->data<<" " ;
            p = p->next ;
        }
    }
}

int hashfunction( int e )
{
    return ( e % Max ) ;
}

int insert()
{
    node temp ;
    int e , key ;
    cout<<"Enter element: " ;
    cin>>e ;
    key = hashfunction(e) ;
    temp = new( struct ll ) ;
    temp->data = key ;
    temp->next = NULL ;

    if( head[key] == NULL )
    {
        head[key]= temp ;
        head[key]->next = NULL ;
    }
    else
    {
        node p ;
        p = head[key] ;
        while( p->next != NULL )
        {
            p = p->next ;
        }
        p->next = temp ; 
    }
}
