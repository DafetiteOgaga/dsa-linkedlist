#include "linkedlist.h"

/*
 * add_node_to_beginning function - prepends a new node to the linked list
 * returns - the a pointer to the new head of the linked list
 */
struct node * add_node_to_beginning (struct node *head) {
	/* declarations and definitions */
	struct node *newNode;
	int check, resp;
	
	newNode = (struct node *) malloc (sizeof(struct node)); // node creation in memory
	check = confirm_space_allocation (newNode); // checks if the allocation was successful
	if (check) {
		return NULL;
	}

	printf ("Enter the new head data >>> ");
	resp = converts_input_to_integer(newNode, 1); // converts input to integer
	if (resp) {
		return head;
	}

	newNode->next = head; // sets the node's pointer to previous node
	head = newNode; // sets the head to the new node
	
	return head;
}

