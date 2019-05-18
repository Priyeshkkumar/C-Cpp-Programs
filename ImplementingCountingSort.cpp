//Implementing counting sort using arrays..

#include<iostream>

using namespace std ;

int countsort( int arr[] , int n , int range , int llimit )
{
	int counter[ range ] = {0} , output[n] = {0} ;
	for( int i = 0 ; i < n ; i++ )
	{
		counter[arr[i] - llimit ]++ ;
	}
	
	int i = 0 , j = 0 ;
	while( i < range )
	{
		while( counter[i] > 0 )
	    {
		    output[j] = llimit + i ;
		    j++ ;
		    counter[i]-- ;
		}
		
		i++ ; 
		
	}	
	cout<<"Sorted Array:\n" ;
	for( int i = 0 ; i < n ; i++ )
	cout<<output[i]<<" " ;
	
}

int main()
{
	int n ,llimit , ulimit , range ;
	cout<<"Enter number of elements:" ;
	cin>>n ;
	
	cout<<"Enter lower and upper limits of elements: " ;
	cin>>llimit>>ulimit ;
	
	int arr[n] ;
	cout<<"Enter elements:" ;
	for( int i = 0 ; i < n ; i++ )
	cin>>arr[i] ;
	
	range = ulimit - llimit + 1 ;
	
	countsort( arr , n , range , llimit ) ;
	
    return 0 ;
}
