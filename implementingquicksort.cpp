#include<iostream>
#include<cstdlib>

using namespace std ;

int swap( int *a , int *b )
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

int partition( int arr[] , int low , int high )
{
	int index = low ;
	int pivot = high ;
	for( int i = low ; i < high ; i++ )
	{
		if( arr[i] < arr[pivot] )
		{
			swap( &arr[i] , &arr[index] ) ;
			index++ ;
		}
	} 
	swap( &arr[index] , &arr[pivot] ) ;
	return index ;
}

int randompivot( int arr[] , int low  , int high )
{
	int index , randomno ;
	randomno = low + rand()%( high - low + 1 ) ;
	swap( &arr[ randomno ] , &arr[ high ] ) ;
	index =  partition( arr , low , high ) ;
	return index ;
}

int quicksort( int arr[] , int low , int high )
{
	int index ;
	if( low < high )
	{
		index = randompivot( arr , low , high ) ;
		quicksort( arr , low , index - 1 ) ;
		quicksort( arr , index + 1 , high ) ;
	}

	return 0 ;
}

int main()
{
	int n , pivot ;
	cout<<"Enter number of elements:" ;
	cin>>n ;
	int arr[n] ;
	for( int i = 0 ; i < n ; i++ )
	cin>>arr[i] ;
	
	quicksort( arr , 0 , n-1 ) ;
	
	for( int i = 0 ; i < n ; i++ )
	cout<<arr[i]<<" " ;
	
}
