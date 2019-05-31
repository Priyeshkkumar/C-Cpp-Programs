//Infix to Postfix 
//Push the operator with higher precedence..
//Used Stack (STL)..

#include<iostream>
#include<string.h>
#include<stack>
#include<vector>

using namespace std ;

int precedence( char c ) ;

int main()
{
    vector <char> arr ;
    stack <char> stk ; 
    string in ;
    int m ;
    cout<<"Enter infix string: ";
    cin>>in ;

    
   for( int i = 0 ; i < in.length( ) ; i++ )
   {
       if( in.at(i) >= 'a' && in.at(i) <= 'z' || in.at(i) >= 'A' && in.at(i) <= 'Z' )
        cout<<in.at(i) ;

       if( !stk.empty() &&  )    

       else
       {
            if( stk.empty() || in.at(i) == '(' )
            {
                stk.push( in.at(i) ) ;
            }
            else if( in.at(i) == ')' ) 
            {
                char x = stk.pop() ;
                if( x != ')' )
                cout<<x ;
            }     
       } 
        
   } 


    /*while( !stk.empty() )
    {
        cout<<stk.top() ;
        stk.pop() ;
    }*/
}

int precedence( char c )
{
    if( c == '^'  )
        return 3 ;
    else if( c == '*' || c == '/' )
        return 2 ;
    else if( c == '+' || c == '-' )
        return 1 ;    
}