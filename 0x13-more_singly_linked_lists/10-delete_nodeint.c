#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at selected index
 * @head: head of linked list
 * @index: index where to delete node
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2;
	unsigned int count = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		temp2 = temp->next;
		*head = temp2;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (count + 1 == index)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
