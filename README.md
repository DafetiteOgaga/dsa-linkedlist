# DSA: Linked List

This program is written in C and creates a linked list based on user input. It then prints out the elements of the linked list.

#### Note: You can also access the list using the head variable assighed to the head node in the main function.

## Description

### The program consists of the following components:

#### linkedlist.h
- **Node Structure**: Defines the structure of a node in the linked list, which includes the data part (data) and a pointer (next) to the next node.
- **Prototypes**: Function declaration of all the defined functions.

#### main_linkedlist.c
- **Main Function**: The main function (entry point).

#### create_list.c
- **Create_list Function**: Creates the linked list by taking user input and dynamically allocating memory for each node.

#### print_and_count_list.c
- **Count_elements Function**: Counts the number of elements in the linked list.
- **Print_list Function**: Prints out the elements of the linked list in the form of an array.

## Usage

To use the program:

1. Compile the source code using a C compiler (e.g., GCC).
2. Run the compiled executable.
3. Follow the prompts to enter data for each node of the linked list.
4. Enter a non-integer character when done entering data.
5. The program will display the number of elements in the linked list and print out the elements.

## Example

Here's a simple example of how to use the program:

```c
// Clone the repository
git clone https://github.com/DafetiteOgaga/dsa-linkedlist.git


// cd into the repository
cd dsa-linkedlist 

// Compile the source code
gcc print_and_count_list.c create_list.c main_linkedlist.c -o output_file

// Run the compiled executable
./output_file
```


### dsa-linkedlist and README were auto created




###### *We Rise by Lifting Others.*
