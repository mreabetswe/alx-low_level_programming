#include <stdlib.h>
#include "lists.h"

/**
 * free_list - f when it runs it frees a linked list.
 * @head: The pointer to the first node of linked list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
