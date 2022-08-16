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
	unsigned int i;

	current = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	/* iterate to set current to the previous node to the index */
	for (i = 0; i < (idx - 1) && *head != NULL; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (idx == 0)
	{
		/* set newnode as first node */
		newnode->next = *head;
		*head = newnode;
	}
	else if (current->next)
	{
		/* set next as newnode next */
		newnode->next = current->next;
		current->next = newnode; /* set next as newnode */
	}
	else
	{
		/* if position is not present in list */
		newnode->next = NULL; /* set newnode as last node */
		current->next = newnode;
	}

	return (newnode);
}
