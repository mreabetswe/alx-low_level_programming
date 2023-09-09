#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - prints out the number of elements of a list
 * @h: the linked list
 * Return: if succesful run the number of elements of a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp;

	tmp = h;
	while (tmp != 0)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}
