#include "linkedlist.h"

/*
 * add_node_to_end function - appends a new node to the linked list
 */
int add_node_to_end (struct node *head) {
	/* declarations and definitions */
	struct node *newNode, *temp;
	int resp, check;
	
	newNode = (struct node *) malloc (sizeof(struct node)); // node creation in memory
	check = confirm_space_allocation (newNode); // checks if the allocation was successful
	if (check) {
		return check;
	}

	printf ("Enter last data >>> ");
	resp = converts_input_to_integer(newNode, 1); // converts input to integer
	if (resp) {
		return resp;
	}

	temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	newNode->next = NULL; // sets the node's pointer to null
	temp->next  = newNode; // sets the last node to point to the new node
}

