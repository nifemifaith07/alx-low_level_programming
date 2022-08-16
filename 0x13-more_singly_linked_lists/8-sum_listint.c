#include "lists.h"

/**
 * sum_listint - returns the sum of all data(n) of listint_t list.
 * @head: pointer to the first node of the list
 *
 * Return: the sum of all data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		/* add n to sum */
		sum += head->n;
		/* set next as head */
		head = head->next;
	}

	return (sum);
}
