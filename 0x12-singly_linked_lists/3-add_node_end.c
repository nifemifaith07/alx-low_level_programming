#include "lists.h"

/**
 * add_node_end - adds a node at the end of a lisnkedlist
 * head: pointer to pointer to first node of the list
 * str: string to add
 * Return: address of the new element, NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t str_len = 0;

	/* string lenght is 0 if null */
	if (str == NULL)
		str_len = 0;
	/* get lenght of string */
	while (str != NULL)
		str_len++;

	/* allocate new_node, return null if malloc fails */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*initialize new_node */
	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	/* make new_node head if list is empty */
	if (*head == NULL)
		*head = new_node;
	else
	{
		/* copy the addr of head node to temp */
		temp = *head;
		/* else transverse till temp->next is last node */
		while (temp->next != NULL)
			temp = temp->next;
		/* change next of last->node */
		temp->next = new_node;
	}

	return (*head);
}
