/* By using the fact that the pair of unequal elements must include either first or last element or both, by traversing the array either by fixing the 
first or last element */

#include<iostream>

using namespace std ;

int findmax( int arr[] , int n ) ;

int main()
{
    int n, maxlength ;
    char ch ;
    cout<<"Enter number of elements: " ;
    cin>>n ;

    int arr[n] ;

    cout<<"Enter elements: " ;

    for( int i = 0 ; i < n ; i++ )
        cin>>arr[i] ;

    cout<<"Enterd elements: "; 
    for( int i = 0 ; i < n ; i++  )
        cout<<arr[i]<<" " ;

    maxlength = findmax( arr , n  ) ;

    cout<<"\nMax Distance b/w two distinct elements is : "<<maxlength ;

    return 0 ;
}

int findmax( int arr[] , int n ) 
{
    int fix = arr[0] , lengthleft , lengthright ;
    for( int i = n-1 ; i >= 0 ; i-- )
    {
        if( arr[i] != fix )
        {
            lengthleft = i  ;
            break ;
        }
    }

    fix = arr[n-1] ;
    for( int i = 0 ; i < n ; i++ )
    {
        if( arr[i] != fix )
        {
            lengthright = i ;
            break ;
        }
    }    
    return max( lengthleft , lengthright ) ;
}