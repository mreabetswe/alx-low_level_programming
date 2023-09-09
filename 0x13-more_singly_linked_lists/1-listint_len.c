#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer
 * Return: The number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int index = 0;

	while (h != NULL)
	{
		index++;
		h = h->next;
	}
	return (index);
}
