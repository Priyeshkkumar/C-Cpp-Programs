//Implementing Insertion Sort

#include<iostream>

using namespace std ;

int insertion( int arr[] , int n  )
{
	int temp , pointer ;
	for( int i = 1 ; i < n ; i++ )
	{
		temp = arr[i] ;
		pointer = i-1 ;
		while( pointer >= 0 && arr[pointer] > temp )
		{
			arr[pointer+1] = arr[pointer] ;
			pointer-- ;
		}
		arr[pointer+1] = temp ;
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
	
	insertion( arr ,n ) ;	
	
	for( int i = 0 ; i < n ; i++ )
	cout<<arr[i]<<" " ;
}
