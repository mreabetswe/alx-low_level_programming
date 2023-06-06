#include "lists.h"

/**
 * free_listint2 - runs a program that frees a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}

	head = NULL;
}
