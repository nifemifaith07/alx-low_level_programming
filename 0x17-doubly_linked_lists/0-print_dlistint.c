#include "lists.h"

/**
 * print_dlistint - prints all elements in a dlistint list
 * @h: pointr to first node
 *
 * Return: no of nodes in dlistint list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_count++;
	}
	return (n_count);
}
