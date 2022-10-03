#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list.
 * @head: pointer to first node pointer
 * @index: position to delete from
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr = *head, *prev = NULL;

	if (*head == NULL || curr == NULL)
		return (-1);

	for (; i < index; i++)
	{
		if (curr == NULL)
			return (-1);
		prev = curr;
		curr = curr->next;
	}

	if (curr == (*head))
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		prev->next = curr->next;
		if (curr->next != NULL)
			curr->next->prev = prev;
	}

	free(curr);
	return (1);
}
