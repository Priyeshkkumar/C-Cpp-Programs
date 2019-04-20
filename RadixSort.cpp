//Implementing Radix Sort...

#include<iostream>
#include<conio.h>

using namespace std ;

int getmax( int arr[] , int size )
{
	int max  = arr[0] ;
	for( int i = 0 ; i < size ; i++ )
	{
		if( arr[i] > max )
		max = arr[i] ;
	}	
	
	return max ;
} 

int radixsort( int arr[] , int size , int divisor )
{
	int output[ size ] = {0} , counter[10] = {0} ;
	for( int i = 0 ; i < 10 ; i++ )
	{
		counter[ ( arr[ i ]/divisor ) % 10 ]++ ;
	}
	for( int i = 1 ; i < 10 ; i++ )
	{
		counter[i] += counter[ i-1 ] ; 
	}
	for( int i = size-1 ; i >= 0 ; i++ )
	{
		output[ counter[ ( arr[i]/divisor )% 10 ] -1 ] = arr[i] ;
		counter[ ( arr[i]/divisor ) % 10 ]-- ;
	}
	for( int i = 0 ; i < size ; i++ )
	{
		arr[ i ] = output[ i ] ;
	}
}

void display( int arr[] , int size )
{
	for( int i = 0 ; i < size ; i++ )
	cout<<arr[i]<<"  " ;
}

int main()
{
	int size , max ;
	cout<<"Enter Size of array: " ;
	cin>>size ; 
	int arr[ size ] ;
	for( int i = 0 ; i < size ; i++ )
	
	cin>>arr[i] ;
	
    max = getmax( arr , size ) ;
	
	for( int i = 1 ; max/i != 0 ; i *= 10 )
	{
		radixsort( arr , size , i ) ; 	
	} 
	display( arr , size ) ;
}
