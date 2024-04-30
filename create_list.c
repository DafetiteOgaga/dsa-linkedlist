#include "linkedlist.h"

/*
 * create function - creates the linked list
 * returns - the a pointer to the head of the linked list
 */
struct node * create_nodes (void) {
	/* declarations and definitions */
	struct node *head, *theNode, *temp;
	int yes = 1, number, count;
	char input [50];

	head = NULL; // head definition before head node
	
	printf ("Enter a char when done.\n");
	while (yes) {
		theNode = (struct node *) malloc (sizeof(struct node)); // node creation in memory

		/* checks that the space is allocated for the node */
		if (theNode == NULL) {
			printf ("Could not allocate space");
			exit(yes);
		}

		printf ("Enter your data >>> ");
		scanf("%s", input);
		number = atoi(input); // tries to convert the input to an integer

		/* checks if the input is an integer or if the user is done entering data */
		if (number != 0 || input[0] == '0') {
			theNode->data = number; // stores data into the node
		} else {
			break; // exit if the input is not an integer
		}

		theNode->next = NULL; // sets the node's pointer to NULL
		
		if (head == NULL) {
			head = temp = theNode; // head node creation
		} else {
			temp->next = theNode; // points the previous node to the current node
			temp = theNode; // moves attention to the current node i.e leaves the previous node
		}
	}
	temp = head; // resets the temp pointer to the head node
	count = count_elements (temp); // invoke the count_elements function to print the number of elements
	print_list (temp, count); // invoke the print_list function to print the list of elements like an array
	
	putchar('\n');
	return head;
}

