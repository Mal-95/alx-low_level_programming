#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * strct print_list - represents a linked list node with a string
 * Return: the number of nodes in the linked list
 */
typedef struct list_t
{
	char *str;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", count, h->str);
		}

		h = h->next;
		count++;
	}
	return (count);
}
