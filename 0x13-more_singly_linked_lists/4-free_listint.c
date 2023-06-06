#include "lists.h"

/**
 * free_listint - Runs a program that frees a listint_t list.
 * @head: A pointer to the head of the node.
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
