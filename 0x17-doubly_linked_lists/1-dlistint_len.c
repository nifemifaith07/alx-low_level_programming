#include "lists.h"

/** 
 * dlistint_len - returns the no of elements in a linked dlistint_t list.
 * @h: pointer to first node in linked dlistint_t list
 *
 * Return: no of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_elm;

	while (h != NULL)
	{
		h = h->next;
		n_elm++;
	}
	return (n_elm);
}
