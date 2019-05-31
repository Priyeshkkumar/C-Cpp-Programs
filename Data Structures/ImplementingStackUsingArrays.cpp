#include<iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX 1000 

using namespace std ;

class stack
{
        	int size , top ;
        	
	public: 
	        int arr[MAX] ;
	        stack() 
			{ 
				top = -1 ;
			}
	        void push() ;
			void pop() ;
			void displaylist() ;    
} ;

void stack :: push()
{
	int value ;
	if( top >= size - 1 )
	{
		cout<<"Stack Overflow..." ;
	}
	else
	{
		cout<<"Enter element: " ;
		cin>>value ;
		arr[++top] = value ;
		cout<<"Element Pushed..." ;
		getch() ;
		system("CLS") ;
	}
}

void stack :: pop() 
{
	if( top < 0 )
	cout<<"Stack Underflow..." ;
	
	else
	{
		int x ;
		x = arr[top--] ;
		cout<<"Popped Element is "<<x ;
	}
	getch() ;
	system("CLS") ;
}
void stack :: displaylist() 
{
	cout<<"Elements of list are:\n" ;
	cout<<"Last Element -> " ;
	for( int i = top ; i >= 0 ; i-- )
	cout<<arr[i]<<" " ;
	
	cout<<"->First Element" ;
}

int main()
{
	stack o ;
	int choice ;
	do
	{
		cout<<"###### STACK #####\n#                #\n" ;
		cout<<"# 1.PUSH         #\n# 2.POP          #\n# 3.Display List #\n# 4.Exit         #\n" ;
		cout<<"##################\n\nEnter Choice:" ;
		cin>>choice ;
		switch( choice )
		{
			case 1 : o.push() ;
			         system("CLS") ;
			         break ;
			         
			case 2 : o.pop() ;
			  		 system("CLS") ;
			         break ;
			         
			case 3 : o.displaylist() ;
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
	
}
