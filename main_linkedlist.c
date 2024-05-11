#include "linkedlist.h"

/* 
 * main - entry point
 * returns - 0 on success
 * */
int main (void) {
	struct node *head;
	int count, number = 1000, ret;

	head = create_nodes();
	if (head == NULL) {
		return (1);
	}
	// printf("The head of the nodes is at: %p\n", head);
	count = count_elements (head); // invoke the count_elements function to print the number of elements
	print_list (head, count); // invoke the print_list function to print the list of elements like an array

	while (number) {
		putchar('\n');
		printf ("Press 1: To add a new head node\n\
Press 2: To add node to any position\n\
Press 3: To add node to the foot node\n");
		printf (" >>> ");
		number = converts_input_to_integer(NULL, 1); // converts input to integer
		if (number == 50) {
			count = count_elements (head);
			print_list (head, count);
			break; // exit if the input is not an integer
		}

		if (number == 1) {
			head = add_node_to_beginning(head);
			if (head == NULL) {
				break;
			}
		} else if (number == 2) {
			ret = add_node_to_any_position(head, count);
		} else if (number == 3) {
			ret = add_node_to_end(head);
		} else {
			printf("Invalid entry\n");
            // continue;
		}
		count = count_elements (head);
		print_list (head, count);
	}
	
	return (0);
}

