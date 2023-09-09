#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the start of a linked list
 * @head: data pointer to the list_t list
 * @str: string to add in the node
 * Return: if succesful it will run the
 * new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;

		*head = new;

		return (new);
	}

	return (0);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  * Return: String length
  */
int _strlen(const char *s)
{
	int r = 0;

	while (*s)
	{
		s++;
		r++;
	}

	return (r);
}
