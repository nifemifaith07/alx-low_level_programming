#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to first node pointer
 * @idx: index to insert node
 * @n: value in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *curr = *h, *prev = *h, *new = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h == NULL || (curr == NULL && idx > 0))
		return (NULL);
	/* set current ahead of previous */
	curr = curr->next;
	for (i = 1; i < idx; i++)
	{
		if (prev->next == NULL)
			return (NULL);
		curr = curr->next;
		prev = prev->next;
	}
	if (curr == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = curr;
	new->prev = prev;
	prev->next = new;
	curr->prev = new;

	return (new);
}
