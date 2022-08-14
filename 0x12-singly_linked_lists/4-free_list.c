#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to first node of list_t list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while(head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
