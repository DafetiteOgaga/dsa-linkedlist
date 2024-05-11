#include "linkedlist.h"

/*
 * counter function - counts the number of elements in the linked list
 * @head - head pointer of the linkedlist
 * returns - the number of elements
*/
int count_elements (struct node *head) {
	struct node *temp = head; // temp is used to traverse the list
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
 * @head - head pointer of the linkedlist
 * @count - number of elements (nodes) in the linkedlist
*/
void print_list (struct node * head, int count) {
	struct node *temp = head; // temp is used to traverse the list
	int length = 0;
	
	printf ("Result: ");

	/* prints the elements in the form of an array */
	putchar('[');
	int i = 0;
	while (i < count) {
		printf ("%d", temp->data); // prints the data part of the current node
		length += lenth_of_numbers(temp->data); // accumulates the lengths of each data parts of the nodes
		temp = temp->next; // moves the pointer to the next node
		(i != (count - 1)) && printf(", ");
		i++;
	}
	printf("]");
	putchar('\n');
	for(i = 0; i < (length+(count*2)+8); i++) {
		printf("."); // dynamically prints the doted underlines
	}
	putchar('\n');
}

/*
 * lenth_of_numbers functiom
 * @number - the number to be counted
 * returns the length of number
 */
int lenth_of_numbers(int number) {
	int length;
	char str[10]; // Assuming the number won't exceed 10 digits
	sprintf(str, "%d", number); // Convert integer to string 
	length = strlen(str); // Find the length of the string 
	// printf("Number of digits: %d\n", length); 
	return length;
}

/*
 * converts_input_to_integer - function
 * @newNode - pointer to the node to whose address part needs to be filled
 * @skip - number to decide whether to skip printing the error message
 * return - 0 on success
 */
int converts_input_to_integer(struct node *newNode, int skip) {
	char input[5];
	int number;

	scanf("%s", input);
	number = atoi(input); // tries to convert the input to an integer

	/* checks if the input is an integer or if the user is done entering data */
	if (number != 0 || input[0] == '0') {
		if (newNode != NULL) {
			newNode->data = number; // stores data into the node
		} else {
			number = number; // updates the number variable
			return number;
		}
	} else {
		(skip) && printf("Invalid entry\n"); 
		return 50; // exits the operation
	}
	return 0;
}

/*
 * confirm_space_allocation - confirm space allocation
 * @newNode - pointer to be checked
 * returns 0 if successful
 */
int confirm_space_allocation (struct node *newNode) {
	/* checks that the space is allocated for the node */
	if (newNode == NULL) {
		printf ("Could not allocate space");
		return 1;
	}
	return 0;
}