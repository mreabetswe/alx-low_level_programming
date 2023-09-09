#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: listint_t head
 * Return: size_t
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t node1 = 0, node2;
	const listint_t *temp = head;
	const listint_t *next;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);

		node1++;

		temp = temp->next;
		next = head;

		node2 = 0;

		while (node2 < node1)
		{
			if (temp == next)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (node1);
			}

			next = next->next;
			node2++;
		}
	}
	return (node1);
}
