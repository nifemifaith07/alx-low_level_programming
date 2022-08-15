#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to firts node
 *
 * Return: no of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	/* return 0 if h is null */
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		/* go to next node */
		h = h->next;
		/* count increment */
		i++;
	}
	/* print last node */
	printf("%d\n", h->n);

	return (i);
}
