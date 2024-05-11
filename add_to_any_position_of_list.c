#include "linkedlist.h"

/*
 * add_node_to_any_position function - inserts a node into any position in the list
 * return 0 if successful
 */
int add_node_to_any_position (struct node *head, int count) {
	/* declarations and definitions */
	struct node *newNode, *temp = head; // points temp to head
	int position, i = 1, resp, check;

	printf("Choose a position between [1] and [%d] >>> ", count);
	position = converts_input_to_integer(NULL, 1);
	if ((position < 0 || position > count) || (position == 50)) {
		return position;
	}

	while (i < (position-1)) {
		temp = temp->next;
		i++;
	}

	newNode = (struct node *) malloc (sizeof(struct node)); // node creation in memory
	check = confirm_space_allocation (newNode); // checks if the allocation was successful
	if (check) {
		return check;
	}

	printf ("Enter the data for position %d >>> ", position);
	resp = converts_input_to_integer(newNode, 1); // converts input to integer
	if (resp) {
		return resp;
	}

	newNode->next = temp->next; // sets the new node's pointer to the next node
	temp->next  = newNode; // sets the previous node to point to the new node
	return 0;
}

