#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: pointer to first node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	/* iterate through each node till head is null */
	while (head != NULL)
	{
		current = head;
		/* set head to next node */
		head = head->next;
		free(current);
	}
}
