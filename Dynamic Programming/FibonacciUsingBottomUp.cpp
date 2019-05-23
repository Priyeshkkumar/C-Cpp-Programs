//Tabulation

#include<iostream>

using namespace std ;

 long long int fib( long long int arr[] , long long int n )
{    
    if( arr[n] != -1 )
        return arr[n] ;

    if( n == 0 )
    {
        arr[n] = 0 ;
        return arr[n] ;
    }
    if( n == 1 )
    {
        arr[n] = 1 ;
        return arr[n] ;
    }
    
    arr[n] = fib( arr , n-1 ) + fib( arr, n-2 ) ;
    return arr[n] ;
}

int main()
{
    long long int n ;
    cout<<"Enter number for fibonacci sequence:" ;
    cin>>n ;

    long long int arr[n] ;

    for( int i = 0 ; i <= n ; i++ )
        arr[i] = -1 ;

    for( int i = 0 ; i <= n; i++ )
        cout<<fib( arr , i )<<" " ;  
}