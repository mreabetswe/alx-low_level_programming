#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - it prints out all the elements of a listint_t list.
 * @h: the linked list
 * Return: when successful it will print the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
