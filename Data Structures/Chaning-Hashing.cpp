//Implementing chaning in hashing..

#include<iostream>

#define Max 10 
typedef struct ll *node ;

using namespace std ;

int insert() ;
int hashfunction(int) ;
int displaye() ;

struct ll
{
    int data ;
    struct ll *next ;
} *head[Max] ;

int main()
{	
    cout<<"Hello!" ;
    for( int i = 0 ; i < Max ; i++ )
    {
        head[i] = NULL ;
    }

    int choice ;
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

		case 3 : break ;
	}
	}while(choice != 3 ) ;

    return 0 ;
}

int displaye()
{
    cout<<"Elements are:" ;
    for( int i = 0 ; i < Max ; i++ )
    {
        if (head[i] == NULL)
        {
            continue;
        }
        
        cout<<"\n" ;
        node p = head[i] ;
        while( p != NULL )
        {
            cout<<p->data<<" "<<"->" ;
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
    temp = new ll  ;
    temp->data = e ;
    temp->next = NULL ;

    if( head[key] == NULL )
    {
        head[key]= temp ;
        //head[key]->next = NULL ;
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
