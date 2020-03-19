#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_list - prints all elements of a linked list.
 *@h: the pointer to the linked list.
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	int i;

	i = h->len;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		count = 1;
	}
	while (h)
	{
		printf("[%i] %s\n", i, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
