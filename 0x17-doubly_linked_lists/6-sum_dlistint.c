#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data of a dlistint_t linked list.
 * @head: pointer to first node
 *
 * Return: Sum of all data of a list or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
