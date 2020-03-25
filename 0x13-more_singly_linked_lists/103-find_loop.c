#include "lists.h"

/**
 * find_listint_loop - finds the first instance of a loop in a linked list
 * @head: the head of the list
 * Return: the address of the node where the loop starts or Null if no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		if (head->next == NULL)
			return (NULL);

		if (head->next == temp)
			break;

		listint_t nex = head->next;

		head->next = temp;

		head = nex;
	}
	return (head);
}
