#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
