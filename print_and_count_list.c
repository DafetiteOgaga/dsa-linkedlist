#include "linkedlist.h"

/*
 * counter function - counts the number of elements in the linked list
 * @temp - temporary pointer, used to traverse the linkedlist
 * returns - the number of elements
*/
int count_elements (struct node *temp) {
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
 * @temp - temporary pointer, used to traverse the linkedlist
 * @count - number of elements (nodes) in the linkedlist
*/
void print_list (struct node * temp, int count) {
	
	printf ("Result: ");

	/* prints the elements in the form of an array */
	putchar('[');
	// temp = head; // resets the temp pointer to the head node again
	int i = 0;
	while (i < count) {
		printf ("%d", temp->data); // prints the data part of the current node
		temp = temp->next; // moves the pointer to the next node
		(i != (count - 1)) && printf(", ");
		i++;
	}
	printf("]");
}
