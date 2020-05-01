#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_dlistint - prints all elements of a doubly linked list.
 *@h: the pointer to the linked list.
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->next == NULL && h->prev == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%u\n", h->n);
		}
		i++;
		h = h->next;
	}
	return (i);
}
