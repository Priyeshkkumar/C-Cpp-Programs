#include<iostream>

using namespace std ;

int fib( int n )
{
    int q ;
    if( n == 0 ) 
    return 0 ;
    else if( n == 1 )
    return 1 ;
    else if( n > 1 )
    return ( fib( n-1 ) + fib( n-2 ) ) ;
}

int main()
{
    long long int n ;
    cout<<"Enter number for fibonacci sequence:" ;
    cin>>n ;
    for( int i = 0 ; i <= n ; i++ )
    cout<<fib( i )<<"  " ;
}