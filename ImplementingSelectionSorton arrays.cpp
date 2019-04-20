//Implementation of Selection Sort on arrays..

#include<iostream>

using namespace std ;

int swap( int *x  , int *y )
{
	int temp ;
	temp = *x ;
	*x = *y ;
	*y = temp ;
}

//Selection Sort Function
int selection( int arr[] , int n ) 
{
	int min ;
	for( int i = 0 ; i < n ; i++ )
	{
		min = i ;
		for( int j = i+1 ; j < n ; j++ )
		{
			if( arr[j] < arr[min] )
			min = j ;
		}
		swap( &arr[min] , &arr[i] ) ;
	}
}

int main()
{
	int n ;
	cout<<"Enter number of elements:" ;
	cin>>n ;
	int arr[n] ;
	cout<<"Enter elements of array:" ;
	for( int i = 0 ; i < n ; i++ )
	cin>>arr[i] ;
	selection(arr,n) ;
	cout<<"Sorted array(ascending):" ;
	for( int i = 0 ; i < n ; i++ )
	cout<<arr[i]<<" " ;
}
