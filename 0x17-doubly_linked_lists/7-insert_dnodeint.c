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
	dlistint_t *nn, *next1, *temp = *h;
	unsigned int i = 0;

	if (h == NULL && idx != 0)
		return (NULL);
	next1 = *h;
	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	if (idx == 0)
	{
		if (next1 != NULL)
		{
			nn->next = next1;
			next1->prev = nn;
		}
		else
			nn->next = NULL;
		nn->prev = NULL;
		*h = nn;
		return (*h);
	}
	while (i < (idx - 1))
	{
		if (next1 == NULL)
		{
			free(nn);
			return (NULL);
		}
		next1 = next1->next;
		i++;
	}
	temp = next1;
	next1 = next1->next;
	temp->next = nn;
	nn->next = next1;
	nn->prev = temp;
	return (nn);
}
