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
	dlistint_t *ptr;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp || (i == idx - 1 || idx == 0))
	{
		ptr = malloc(sizeof(dlistint_t));
		if (ptr)
		{

			ptr->n = n;

			if (idx == 0)
			{
				ptr->next = *h;
				*h = ptr;
			}
			else
			{
				ptr->next = temp->next;
				temp->next = ptr;
			}
			return (ptr);
		}
	}
	return (NULL);
}
