#include <stdio.h>
#include <stdlib.h>

/*
 * Structure of the node used in the linked list
 * name - node
 * data (int) - the data part of the node
 * next (pointer) - the address part of the node
 */
struct node {
	int data;
	struct node * next;
};

/* prototype(s) */
struct node * create (void);
int counter (struct node *);
void list_created (struct node *, int);

/* 
 * main - entry point
 * returns 0 on success
 * */
int main (void) {
	struct node * head = create();
	// printf("The head of the nodes is at: %p\n", head);
	return (0);
}

/*
 * create function - creates the linked list
 * returns the head of the linked list
 */
struct node * create (void) {
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
	count = counter (temp); // invoke the counter function to print the number of elements
	list_created (temp, count); // invoke the list function to print the list of elements like an array
	
	putchar('\n');
	return head;
}

/*
 * counter function - counts the number of elements in the linked list
 * returns the number of elements
*/
int counter (struct node *temp) {
	int count = 0;

	/* counts the number of elements i.e nodes */
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}
	putchar('\n');
	printf("number of elements: %d\n", count);
	return count;
}

/*
 * list_created function - prints the list of elements in the linked list
*/
void list_created (struct node * temp, int count) {
	
	printf ("Result: ");

	/* prints the elements in the form of an array */
	putchar('[');
	// temp = head; // resets the temp pointer to the head node again
	int i = 0;
	while (i < count) {
		printf ("%d", temp->data); // prints the data part of the current node
		temp = temp->next; // moves the pointer to the next node
		if (i != (count - 1)) {
			printf(", ");
		};
		i++;
	}
	printf("]");
}