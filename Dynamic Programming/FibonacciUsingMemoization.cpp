#include<iostream>

using namespace std ;

 long long int fib( long long int arr[] , long long int n )
{    
    if( n == 0 )
    arr[0] = 0 ;
    if( n == 1 )
    arr[1] = 1 ;
    if( arr[n] == -1 )
    arr[n] = arr[n-1] + arr[n-2] ;
}

int main()
{
    long long int n ;
    cout<<"Enter number for fibonacci sequence:" ;
    cin>>n ;

    long long int arr[n] ;

    for( int i = 2 ; i <= n ; i++ )
        arr[i] = -1 ;

    for( int i = 0 ; i <= n; i++ )
        fib( arr , i ) ;
    for( int i = 0 ; i < n ; i++) 
        cout<<arr[i]<<" " ;   
}