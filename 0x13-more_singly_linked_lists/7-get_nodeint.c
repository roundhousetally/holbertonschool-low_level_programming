#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at the selected index
 * @head: head of list
 * @index: index of the node to get
 * Return: the node or null if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	if (!head)
		return (NULL);

	temp = head;

	while (temp)
	{
		if (count == index)
			return (temp);

		temp = temp->next;
		count++;
	}
	return (NULL);
}
