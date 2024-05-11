#include "linkedlist.h"

/*
 * create function - creates the linked list
 * returns - the a pointer to the head of the linked list
 */
struct node * create_nodes (void) {
	/* declarations and definitions */
	struct node *head, *newNode, *temp;
	int yes = 1, check, resp;

	head = NULL; // head definition before head node
	
	printf ("Enter a char when done.\nYou can only enter 5 digits per node.\n");
	while (yes) {
		newNode = (struct node *) malloc (sizeof(struct node)); // node creation in memory
		check = confirm_space_allocation (newNode); // checks if the allocation was successful
		if (check) {
			return NULL;
		}

		printf ("Enter your data >>> ");
		resp = converts_input_to_integer(newNode, 0); // converts input to integer
		if (resp) {
			break;
		}

		newNode->next = NULL; // sets the node's pointer to NULL
		
		if (head == NULL) {
			head = temp = newNode; // head node creation
		} else {
			temp->next = newNode; // points the previous node to the current node
			temp = newNode; // moves attention to the current node i.e leaves the previous node
		}
	}
	
	return head;
}

