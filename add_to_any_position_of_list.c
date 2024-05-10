#include "linkedlist.h"

/*
 * add_node_to_any_position function - inserts a node into any position in the list
 */
int add_node_to_any_position (struct node *head, int count) {
	/* declarations and definitions */
	struct node *newNode, *temp = head;
	char input [5];
	int number, position, i = 1;


	printf("Choose a position between [1] and [%d] >>> ", count);
	scanf("%d", &position);
	if (position > count) {
		putchar('\n');
		printf("Invalid position\n");
		return 1;
	}


	
	// newNode = (struct node *) malloc (sizeof(struct node)); // node creation in memory

	// temp = head;
	while (i < (position-1)) {
		temp = temp->next;
		// printf("count: %d ::: addy: %p\n", i, temp);
		i++;
	}


	newNode = (struct node *) malloc (sizeof(struct node)); // node creation in memory
								//
	/* checks that the space is allocated for the node */
	if (newNode == NULL) {
		printf ("Could not allocate space");
		exit(1);
	}

	// printf("Choose a position between [1] and [%d] >>> ", count);
	// scanf("%d", &position);
	// if (position >= count) {
	//	printf("Invalid position\n");
	//	exit(1);
	// }
	putchar('\n');
	printf ("Enter the data >>> ");
	scanf("%s", input);
	number = atoi(input); // tries to convert the input to an integer

	/* checks if the input is an integer or if the user is done entering data */
	if (number != 0 || input[0] == '0') {
		newNode->data = number; // stores data into the node
	} else {
		printf("Invalid entry\n"); // exits the operation
	}

	// temp = head;
	// while (i < (position-1)) {
	// 	temp = temp->next;
	//	printf("count: %d ::: addy: %p\n", i, temp);
	//	i++;
	// }
	newNode->next = temp->next; // sets the node's pointer to null
	temp->next  = newNode; // sets the last node to point to the new node
	return 0;
}

