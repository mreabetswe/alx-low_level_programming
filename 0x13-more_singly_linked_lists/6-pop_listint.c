#include "lists.h"

/**
 * pop_listint - Removes the head node of a listint_t list.
 * @head: A pointer to the address of the head.
 *
 * Return: If the linked list is empty return 0, or else NULL.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (num);
}
