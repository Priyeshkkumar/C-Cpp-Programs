
//Program creates a simple linked list with 3 nodes..

#include<iostream>

using namespace std ;

typedef struct node *abc ; 

struct node
{
	int data ;
	struct node *next ;
} ;

int main()
{
		abc head , second , third ;
		head = new(node) ;
		second = new(node) ;
		third = new(node) ;
		
		head -> data = 1 ;
		head -> next = second ;
		
		second -> data = 2 ;
		second -> next = third ;
		
		third -> data = 3 ;
		third -> next = NULL ;
		
		cout<<third -> data ;
} 
