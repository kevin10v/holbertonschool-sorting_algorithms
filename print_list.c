#include "sort.h"

/**
 * print_list - Prints a doubly linked list of integers
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
	int first = 1;

	while (list)
	{
		if (!first)
			printf(", ");
		printf("%d", list->n);
		first = 0;
		list = list->next;
	}
	printf("\n");
}
