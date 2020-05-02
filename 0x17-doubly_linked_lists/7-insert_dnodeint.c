#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at selected space
 * @h: head of linked list
 * @idx: index where to inster node
 * @n: data to put in node
 * Return: adress of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nn, *next1;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (idx == 0)
	{
		nn->next = *h;
		*h = nn;
		nn->prev = NULL;
	}
	else
	{
		next1 = temp->next;
		temp->next = nn;
		nn->prev = temp;
		nn->next = next1;
		return (nn);
	}
	return (NULL);
}
