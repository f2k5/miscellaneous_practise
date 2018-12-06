#include <stdio.h>
#include <stdlib.h>

typedef struct list_node list_node;
struct list_node
{
	int value;
	list_node *next;
};

int main() 
{
	list_node* head = NULL; 
	list_node* second = NULL; 
	list_node* third = NULL; 

	// allocate 3 nodes in the heap   
	head  = (list_node*)malloc(sizeof(list_node));  
	second = (list_node*)malloc(sizeof(list_node)); 
	third  = (list_node*)malloc(sizeof(list_node)); 

	head->value = 314159; //assign data in first node 
	head->next = second; // Link first node with second  
	printf("Data: %d, addr: %p\n", head->value, head->next);   

	second->value = -4201; //assign data to second node 
	second->next = third;   
	printf("Data: %d, addr: %p\n", second->value, second->next); 

	third->value = 6918872; //assign data to third node 
	//link the last node to the first node:
	third->next = head->next; 
	printf("Data: %d, addr: %p\n", third->value, third->next); 

	return 0; 
	
}