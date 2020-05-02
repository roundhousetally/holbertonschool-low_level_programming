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
	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
	{
		free(nn);
		return (NULL);
	}
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp || (i < idx - 1 || idx == 0))
	{
		if (nn)
		{
			nn->n = n;
			if (idx == 0)
			{
				nn->next = temp;
				temp->prev = nn;
				*h = nn;
			}
			else
			{
				next1 = temp->next;
				temp->next = nn;
				nn->prev = temp;
				nn->next = next1;
				next1->prev = nn;
			}
			return (nn);
		}
	}
	return (NULL);
}
