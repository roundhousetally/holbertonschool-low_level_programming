#include "lists.h"

/**
 * listint_len - returns the number of elements in an integer list_t list.
 * @h: the pointer to the list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
