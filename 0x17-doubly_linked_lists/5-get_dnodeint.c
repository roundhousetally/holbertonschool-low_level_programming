#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at the selected index
 * @head: head of list
 * @index: index of the node to get
 * Return: the node or null if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
