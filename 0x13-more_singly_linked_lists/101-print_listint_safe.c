#include "lists.h"

/**
 * print_listint_safe - print a list with a loop
 * @head: the head of the list
 * Return: count of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (98);

	temp = head;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
