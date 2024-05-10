#include "linkedlist.h"

/* 
 * main - entry point
 * returns - 0 on success
 * */
int main (void) {
	struct node * head = create_nodes();
	int count, number = 1000, ret;
	char input [5];

	// printf("The head of the nodes is at: %p\n", head);
	count = count_elements (head); // invoke the count_elements function to print the number of elements
	print_list (head, count); // invoke the print_list function to print the list of elements like an array
	// add_node_to_beginning

	while (number) {
		putchar('\n');
		printf ("Press 1: To add a new head node\n\
Press 2: To add nede to any position\n\
Press 3: To add node to the foot node\n");
		printf (" >>> ");
		scanf("%s", input);
		number = atoi(input); // tries to convert the input to an integer
		/* checks if the input is an integer or if the user is done entering data */
		if (number != 0 || input[0] == '0') {
			number = number; // stores data into the node
		} else {
			// putchar('\n');
			count = count_elements (head);
			print_list (head, count);
			break; // exit if the input is not an integer
		}

		if (number == 1) {
			head = add_node_to_beginning(head);
		} else if (number == 2) {
			ret = add_node_to_any_position(head, count);
			if (ret) {
				continue;
			}
		} else if (number == 3) {
			add_node_to_end(head);
		}
		count = count_elements (head);
		print_list (head, count);
	}
	
	return (0);
}

