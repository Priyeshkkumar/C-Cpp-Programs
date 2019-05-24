#include<iostream>

using namespace std ;

int maxprice( int price[] , int length )
{
    int maxp = -1 ;
    if( length == 0 )
        return 0 ;
    if( length == 1 )
        return 1 ;
    if( length > 1 )
    {
        for( int i = length ; i >= 1 ; i-- )
        maxp = max( maxp , price[i] + maxprice( price , length-i )  ) ;
    }
    return maxp ;
}

int main()
{
     int n , maxp ;
     cout<<"Enter size of price array:" ;
     cin>>n ;
     int price[n] ;
     cout<<"Enter price for cut:\n" ;
     for( int i = 1 ; i <= n ; i++ )
     {
         cout<<" "<<i<<" :" ;
         cin>>price[i] ;
     }
     cout<<"Prices:\n" ;
     for( int i = 1 ; i <= n ; i++ )
     {
         cout<<"\n Cut "<<i<<" : "<<price[i] ;
     }

    int length ;

    cout<<"\nEnter length of rod: " ;
    cin>>length ;

    maxp = maxprice( price , length ) ;
    cout<<"\nMaximum Price: "<<maxp ;
}