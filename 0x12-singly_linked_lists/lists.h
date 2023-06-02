#ifndef _LISTSH_
#define _LISTSH_

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct list_s - The singly linked list
 * @str: the string
 * @next: direction of the node
 * @len: the length of the string
 * descroption: A project that focussed on singly
 * linked lists
 */

typedef struct list_s
{
	char *str;
	struct list_s *next;
	unsigned int len;
}
list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
