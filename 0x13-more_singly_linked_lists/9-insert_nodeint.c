#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head pointer
 * @idx: index of the list where the new node should be added
 * @n: new node's data
 *
 * Return: NULL if anything fails or the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	if (idx == 0)
	{
		/* set newnode as first node */
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	current = *head;

	while (i < (idx - 1) && current->next)
	{
		current = current->next;
		i++;
	}

	if (i < idx -1)
		return (NULL);

	newnode->next = current->next;
	current->next = newnode; /* set next to newnode */

	return (newnode);
}
