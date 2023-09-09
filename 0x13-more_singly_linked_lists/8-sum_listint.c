#include "lists.h"

/**
 * sum_listint - Returns a program that calculates the sum
 * of all the data (n) of a listint_t list.
 * @head: A pointer to the head of a node
 * Return: If the list is empty return 0.
 */

int sum_listint(listint_t *head)
{
	int count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
