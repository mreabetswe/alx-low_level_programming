#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a node
 * at a specified position
 * @head: pointer to head in a node
 * @idx: location to be added
 * @n: node's integer
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *index = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!idx)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	index = *head;
	while (index)
	{
		if (count == (idx - 1))
		{
			new->next = new;
			return (new);
		}
		count++;
		index = index->next;
	}
	free(new);

	return (NULL);
}
