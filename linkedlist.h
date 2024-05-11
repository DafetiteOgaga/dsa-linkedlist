#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Structure of the node used in the linked list
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
struct node * add_node_to_beginning(struct node *);
int add_node_to_end(struct node *);
int add_node_to_any_position(struct node *, int);
int lenth_of_numbers(int);
int converts_input_to_integer(struct node *, int);
int confirm_space_allocation (struct node *);

#endif
