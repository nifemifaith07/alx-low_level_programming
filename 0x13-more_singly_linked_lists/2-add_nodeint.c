#include "lists.h" 

/**
 * add_nodeint - add new node at the beginning of listint_t
 * @head: pointer to head pointer
 * @n: value in node
 *
 * Return: pointer to newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	/* return null if malloc fails*/
	if (newnode == NULL)
                   return (NULL);

	/* if head is null, next points to null */
	if (*head == NULL)
		newnode->next = NULL;
	else
		/*next points to what head points to */
		newnode->next = *head;

	/* initialize newnode */
	newnode->n = n;

	/* head points to newnode */
	*head = newnode;

	return (*head);
}
