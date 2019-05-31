// Implementing Direct Address Table ( insertion , deletion and searching in O(1) time )

#include<iostream>
#define Max 1000 

int table[Max+1][2] ;

int makezero()
{
    for( int i = 0 ; i <= Max ; i++ )
    {
        table[i][0] = 0 ;
        table[i][1] = 0 ;
    }
}

int insert() ;
int del() ;
int search() ;
int display() ;

using namespace std ;

int main()
{
    int c , e ;
    do
    {
        cout<<"\n\nEnter Choice:\n1.Inserting \n2.Deleting \n3.Searching\n4.Display Elements\n5.Exit :" ;
        cin>>c ;
        switch (c)
        {
        case 1: insert() ;
                break ;
        case 2: del() ;
                break ;
        case 3: search() ;
                break ;
        case 4: display() ;
                break ;
        default:
            break;
        }
    } while (c != 5);

}

int insert() 
{
    int e ;
    cout<<"\nEnter Distinct Element(Max range-1000 and negative numbers are allowed):" ;
    cin>>e ;
    if( e>0 )
        table[e][0] = 1 ;
    else
    {
        e *= -1 ;
        table[e][1] = 1 ;
    }
    cout<<"\nElement Added\n";
}

int del()
{
    int e ;
    cout<<"\nEnter elment to be deleted:" ;
    cin>>e ;
    if( e > 0 )
    {
        if( table[e][0] == 1 )
        {
            cout<<"\nElement deleted..." ;
            table[e][0] = 0 ;
        }
        else
        {
            cout<<"\nElement not found" ;
        }
    }
    if( e < 0 )
    {
        if( table[e][1] == 1 )
        {
            cout<<"\nElement deleted..." ;
            table[e][1] = 0 ;
        }
        else
        {
            cout<<"\nElement not found" ;
        }
    }
}
int search()
{
    int e ;
    cout<<"\nEnter element to be searched:" ;
    cin>>e ;
    if( e > 0 )
    {
        if( table[e][0] == 1 )
            cout<<"\nElement is present" ;
        else
            cout<<"\nElement is not present" ;
    }
    else
    {
        if( table[e*-1][1] == 1 )
            cout<<"\nElement is present" ;
        else
            cout<<"\nElement is not present" ;
    }
}

int display()
{
    cout<<"\nPositive Numbers:" ;
    for( int i = 0 ; i <= Max ; i++ )
    {
        if( table[i][0] == 1 )
            cout<<i<<" " ;
    }

    cout<<"\nNegative Numbers:" ;
    for( int i = 0 ; i <= Max ; i++ )
    {
        if( table[i][1] == 1 )
            cout<<"-"<<i<<" " ;
    }
}