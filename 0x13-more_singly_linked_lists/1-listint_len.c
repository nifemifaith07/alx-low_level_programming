#include "lists.h"

/**
 * listint_len - returns number of elements in listint list
 * @h: pointer to firts node
 *
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	/* if h is null return 0 */
	if (h == NULL)
		return (0);

	/* iterate through the list until next is null */
	while (h->next != NULL)
	{
		/* increase count if value is not null */
		if (h->n != '\0')
			count++;

		/* go to next */
		h = h->next;
	}

	return (count);
}
