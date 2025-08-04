#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node structure
 * @n: Integer stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);


#endif /* SORT_H */
