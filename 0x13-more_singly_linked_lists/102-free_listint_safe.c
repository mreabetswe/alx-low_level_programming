#include "lists.h"

/**
 * free_listint_safe - when the program runs it frees
 * a listint_t list
 * @h: listint_t double pointer
 * Return: size_t
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int count2;
	listint_t *head, *new;

	if (*h == NULL)
	{
		return (0);
	}

	head = *h;

	while (head)
	{
		count++;
		count2 = head->next - head;
		new = head;
		free(new);

		if (count2 >= 0)
		{
			break;
		}
		head = head->next;
	}
	return (count);
}
