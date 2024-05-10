#include "linkedlist.h"

/*
 * add_node_to_beginning function - prepends a new node to the linked list
 * returns - the a pointer to the new head of the linked list
 */
struct node * add_node_to_beginning (struct node *head) {
	/* declarations and definitions */
	struct node *newNode;
	char input [5];
	int number;
	
	newNode = (struct node *) malloc (sizeof(struct node)); // node creation in memory

	/* checks that the space is allocated for the node */
	if (newNode == NULL) {
		printf ("Could not allocate space");
		exit(1);
	}

	printf ("Enter the new head data >>> ");
	scanf("%s", input);
	number = atoi(input); // tries to convert the input to an integer

	/* checks if the input is an integer or if the user is done entering data */
	if (number != 0 || input[0] == '0') {
		newNode->data = number; // stores data into the node
	} else {
		printf("Invalid entry\n"); // exits the operation
	}

	newNode->next = head; // sets the node's pointer to previous node
	head = newNode; // sets the head to the new node
	
	return head;
}

