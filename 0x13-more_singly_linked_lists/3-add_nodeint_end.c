#include "lists.h"

/**
 * add_nodeint_end - adds newnode at the end of list
 * @head: pointer to head pointer
 * @n: value in data field
 *
 * Return: pointer to head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t temp;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next= NULL;

	temp = *head;

	if (temp == NULL)
		*head = newnode;

	else
	{
		while (temp->next != NULL)
			temp = temp->next; /* go to last node */

		temp->next = newnode; /* place newnode at the end */
	}

	return (*head);
}
