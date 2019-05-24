//Memoized

#include<iostream>

using namespace std ;

int maxprice( int price[] , int length , int maxpricearray[] ) ;

int main()
{
     int n , maxp ;
     cout<<"Enter size of price array:" ;
     cin>>n ;
     int price[n] ;

     price[0] = 0 ;

     cout<<"Enter price for cut:\n" ;
     for( int i = 1 ; i <= n ; i++ )
     {
         cout<<" "<<i<<" :" ;
         cin>>price[i] ;
     }
     
     /*cout<<"\nPrices:" ;
     for( int i = 1 ; i <= n ; i++ )
     {
         cout<<"\n Cut "<<i<<" : "<<price[i] ;
     }*/

    int length ;

    cout<<"\nEnter length of rod: " ;
    cin>>length ;

    int maxpricearray[length] ;

    for( int i = 0 ; i <= n ; i++ )
        maxpricearray[i] = -1 ;


    maxp = maxprice( price , length , maxpricearray ) ;

    
    /*cout<<"\nMax Prices:\n" ;
    for( int i = 1 ; i <= length ; i++ )
    {
        cout<<"\n Max "<<i<<" : "<<price[i] ;
    }*/

    cout<<"\nMaximum Price: "<<maxp ;

}

int maxprice( int price[] , int length , int maxpricearray[] )
{
    int maxp = -1 ;  

    if( maxpricearray[length] != -1 )
        return maxpricearray[length] ;

    if( length == 0 )
    {
        maxpricearray[length] = 0 ;
        return 0 ;
    }

    if( length == 1 )
    {
        maxpricearray[length] = 1 ;
        return 1 ;
    }
      
    if( length > 1 )
    {
        for( int i = length ; i >= 1 ; i-- )
            maxp = max( maxp , price[i] + maxprice( price , length-i , maxpricearray )) ;    
    }
    maxpricearray[length] = maxp ;
    return maxp ;
    
}
