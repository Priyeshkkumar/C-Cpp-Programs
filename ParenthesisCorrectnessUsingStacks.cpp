//Parenthesis Correctness using Stack....

#include<iostream>
#include<stack>
#include<string.h>
#include<conio.h>

using namespace std ;

stack<char> c ;
char x ;

bool correct(string s)
{
	for( int i = 0 ; i < s.length() ; i++)
	{
		if( s[i] == '(' || s[i] == '{' || s[i] == '[' )
		{
			c.push(s[i]) ;
			continue ;
		}	
		if( c.empty() )
		return false ;
		
		switch( s[i] )
		{
			case ')':	x = c.top() ;
						c.pop() ;
						if( x == '}' || x == ']' )
						return false ;
						break ;
			case ']':	x = c.top() ;
						c.pop() ;
						if( x == ')' || x == ']' )
						return false ;
						break ;
			case '}':	x = c.top() ;
						c.pop() ;
						if( x == ']' || x == '}' )
						false ;
						break ;
		}			
						 				
		} 		
	return true ;	
}


int main()
{
	bool flag ;
	string s ;
	cout<<"Enter String of Parenthesis: " ;
	getline( cin , s ) ; 
	flag = correct( s ) ;
	if( flag )
	cout<<"\nBalanced...!" ;
	else 
	cout<<"\nNot Balanced..!" ;
}
