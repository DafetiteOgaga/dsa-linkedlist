#include "linkedlist.h"

/*
 * counter function - counts the number of elements in the linked list
 * @head - head pointer of the linkedlist
 * returns - the number of elements
*/
int count_elements (struct node *head) {
	struct node *temp = head; // temp is used to traverse the list
	int count = 0, i;

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
 * @head - head pointer of the linkedlist
 * @count - number of elements (nodes) in the linkedlist
*/
void print_list (struct node * head, int count) {
	struct node *temp = head; // temp is used to traverse the list
	int length = 0;
	
	printf ("Result: ");

	/* prints the elements in the form of an array */
	putchar('[');
	// temp = head; // resets the temp pointer to the head node again
	int i = 0;
	while (i < count) {
		printf ("%d", temp->data); // prints the data part of the current node
		length += lenth_of_numbers(temp->data); 
		temp = temp->next; // moves the pointer to the next node
		(i != (count - 1)) && printf(", ");
		i++;
	}
	printf("]");
	putchar('\n');
	for(i = 0; i < (length+(count*3)+10); i++) {
		printf(".");
	}
	putchar('\n');
}


int lenth_of_numbers(int number) {
	int length;
	char str[10]; // Assuming the number won't exceed 10 digits
	sprintf(str, "%d", number); // Convert integer to string 
	length = strlen(str); // Find the length of the string 
	// printf("Number of digits: %d\n", length); 
	return length;
}
