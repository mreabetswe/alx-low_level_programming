#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

struct result *Add(struct result *head, int size)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    list_t *next_node = NULL;
    hello.next = next_node;
    

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
