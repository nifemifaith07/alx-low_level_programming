#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of listint_t list
 * @head: pointer to the first node of the list
 * @index: index of node to access
 *
 * Return: nth node of list or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

/* iterate till node before nth node while head is not null */
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	if (!head)
		return (NULL);
	return (head);
}
