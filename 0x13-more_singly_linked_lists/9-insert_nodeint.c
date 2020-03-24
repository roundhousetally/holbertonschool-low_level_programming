#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at selected space
 * @head: head of linked list
 * @idx: index where to inster node
 * @n: data to put in node
 * Return: adress of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *temp = *head;
	unsigned int i = 0;

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp || (i == idx - 1 || idx == 0))
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr)
		{

			ptr->n = n;

			if (idx == 0)
			{
				ptr->next = *head;
				*head = ptr;
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
