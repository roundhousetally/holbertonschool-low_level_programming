#include "lists.h"

/**
 * print_listint - prints the elements in an iteger linked list
 * @h: pointer to the head of the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
