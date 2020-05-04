#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at selected index
 * @head: head of linked list
 * @index: index where to delete node
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{

		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (count + 1 == index)
		{
			temp->next = temp->next->next;
			if (temp->next == NULL)
			{
				free(temp);
				return (1);
			}

		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
