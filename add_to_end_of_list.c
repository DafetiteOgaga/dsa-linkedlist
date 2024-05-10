#include "linkedlist.h"

/*
 * add_node_to_end function - appends a new node to the linked list
 */
void add_node_to_end (struct node *head) {
	/* declarations and definitions */
	struct node *newNode, *temp;
	char input [5];
	int number;
	
	newNode = (struct node *) malloc (sizeof(struct node)); // node creation in memory

	/* checks that the space is allocated for the node */
	if (newNode == NULL) {
		printf ("Could not allocate space");
		exit(1);
	}

	printf ("Enter last data >>> ");
	scanf("%s", input);
	number = atoi(input); // tries to convert the input to an integer

	/* checks if the input is an integer or if the user is done entering data */
	if (number != 0 || input[0] == '0') {
		newNode->data = number; // stores data into the node
	} else {
		printf("Invalid entry\n"); // exits the operation
	}

	temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	newNode->next = NULL; // sets the node's pointer to null
	temp->next  = newNode; // sets the last node to point to the new node
}

