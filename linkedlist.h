#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>

/*                                                                 * Structure of the node used in the linked list
 * @data (int) - the data part of the node
 * @next (pointer) - the address part of the node
 */
struct node {
	int data;
	struct node * next;
 };

/* prototypes */
struct node * create_nodes (void);
int count_elements (struct node *);
void print_list (struct node *, int);

#endif
