//Stack in STL..

#include<iostream>
#include<stack>
#include<conio.h>

using namespace std ;

stack<int> s ;

void display()
{
	stack<int> o = s ;
	
	cout<<"Elements of stack are:\nTop-> " ;
	while( !o.empty() )
	{
		cout<<o.top()<<" " ;
		o.pop();
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
			case 1 : int value ;
					 cout<<"Enter Element to be pushed: " ;
					 cin>>value ;
					 s.push( value ) ;
			         system("CLS") ;				  
			         break ;
			         
			case 2 : int x ;
					 cout<<"Element popped is: "<<s.top() ; 
					 s.pop() ;
			  		 getch() ;
			  		 system("CLS") ;
			         break ;
			         
			case 3 : display() ;
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
