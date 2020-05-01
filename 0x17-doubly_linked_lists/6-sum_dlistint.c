#include "lists.h"

/**
 * sum_dlistint - sums the ints in a linked list
 * @head: pointer to the data
 * Return: the sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
