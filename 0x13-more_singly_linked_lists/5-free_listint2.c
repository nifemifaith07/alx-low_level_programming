#include "lists.h"

/**
 * free_listint2 - frees listint_t list and sets head to null
 * @head: pointer to head pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (*head != NULL)
	{
		/* set head address to current node */
		current = *head;

		while ((temp = current) != NULL)
		{
			/* set nextnode as new current */
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
