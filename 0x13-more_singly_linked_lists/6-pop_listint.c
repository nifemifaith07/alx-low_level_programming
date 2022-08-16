#include "lists.h"

/**
 * pop_listint - frees listint_t first node and return its data
 *  @head: pointer to head 
 *
 * Return: data in data field
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *next;
	int data;

	if (head == NULL)
		return (0);

	/* set head address to temp */
	temp = *head;
	/*get data in first node */
	data = temp->n;
	/* get next pointer in first node */
	next = temp->next;

	/*free first node */
	free(temp);

	/* set next to head */
	*head = next;

	return (data);
}
