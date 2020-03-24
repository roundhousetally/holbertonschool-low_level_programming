#include "lists.h"

/**
 * sum_listint - sums the ints in a linked list
 * @head: pointer to the data
 * Return: the sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
