//Implementing Bubble Sort on Arrays..

#include<iostream>

using namespace std ;

int swap( int *x , int*y )
{
	int temp = *x ;
	*x = *y ;
	*y = temp ;
}

int bubble( int arr[] , int n  )
{
	
	for(int i = 0 ; i < n-1  ;i++ ) 
	{
		for( int j = 0 ; j < n-i-1 ; j++ )
		{
			if( arr[j] > arr[j+1] )
			swap( &arr[j] , &arr[j+1] ) ;
		}
	}
}
int main()
{
	int n ;
	cout<<"Enter number of elements:" ;
	cin>>n ;
	int arr[n] ;
	cout<<"Enter elements:" ;
	for( int i = 0 ; i < n ; i++ )
	cin>>arr[i] ;
	
	bubble( arr , n ) ;
	
	cout<<"Sorted array(ascending):" ;
	for( int i = 0 ; i < n ; i++ )
	{
		cout<<arr[i]<<" " ;
	}
}
