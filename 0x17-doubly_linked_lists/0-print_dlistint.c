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
	const dlistint_t *temp;
	size_t i = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%u\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
