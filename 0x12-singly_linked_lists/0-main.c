#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */ 

int main(void) 
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5};
    list_t*next_node = NULL;
    hello.next = next_node;
    head = &hello;
    new = malloc(sizeof(list_t));
    typedef struct list_s
    char *str;
    unsigned int len;
    struct list_s *next;
    list_t;

    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %u elements\n", *int);
    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %u elements\n", *int);
    free(new);
    return (0);
}
