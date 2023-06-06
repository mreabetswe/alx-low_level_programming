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
	listint_t *new, *last;

	if (head == NULL || *head == NULL)
		return (NULL);

	for (count = 0; index != NULL; count++)
	index = index->next;

	if (idx > (count + 1))
		return (NULL);

	index = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		last = *head;
		for (count = 0; count < (idx - 1); count++)
			index = index->next;
		for (count = 0; count < idx; count++)
		last = last->next;
		index->next = new;
		new->next = last;
		return (new);
	}
}
