//Implementing counting sort using arrays..

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std ;

int countsort( int arr[] , int n , int range , int llimit )
{
	//original range array..
	int counter[ range ] = {0} , b[n] = {0} ;
	for( int i = 0 ; i < n ; i++ )
	{
		counter[arr[i] - llimit ]++ ;
	}
	for( int i = 0 ; i < range ; i++ )
	{
		cout<<counter[i]<<" " ;
	}
	cout<<endl ;
	
	int i = 0 , j = 0 ;
	while( i < range )
	{
		while( counter[i] > 0 )
	    {
		    b[j] = llimit + i ;
		    j++ ;
		    counter[i]-- ;
		}
		
		i++ ; 
		
	}	
	for( int i = 0 ; i < n ; i++ )
	cout<<b[i]<<" " ;
	
	getch() ;
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
	
	system("CLS") ;
}
