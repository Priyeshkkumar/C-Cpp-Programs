//Program to implement Heap Sort

#include<iostream>

using namespace std ;

int heapify( int arr[] , int n , int i )
{
    int largest = i ;
    int left = 2*i+1 ;
    int right = 2*i+2 ;
    if( left < n && arr[left] > arr[largest] )
        largest = left ;
    if( right < n && arr[right] > arr[largest] )
        largest = right ;
    if( largest != i )
    {
        swap( arr[i] , arr[largest] ) ;
        heapify( arr , n , largest ) ;
    }

}

int heapsort( int arr[] , int n )
{
    for( int i = ( n/2-1 ) ; i >=0 ; i--)
        heapify( arr , n , i ) ;

    for( int i = n-1 ; i >= 0 ; i-- )
    {
        swap( arr[0] , arr[i] ) ;
        heapify( arr , i , 0 ) ;
    }    
} 

int main()
{
    int n ;
    cout<<"Enter length of array: " ;
    cin>>n ;
    int arr[n] ;
    cout<<"Enter elements:" ;

    for( int i = 0 ; i < n ; i++ )
    {
        cin>>arr[i] ;
    }
    cout<<"Unsorted array:" ;
    for( int i = 0 ; i < n ; i++ )
    {
        cout<<arr[i]<<" " ;
    }

    heapsort( arr , n ) ;

    cout<<"\nSorted array: " ;
    for( int i = 0 ; i < n ; i++ )
    cout<<arr[i]<<" " ;

    return 0 ;
}


