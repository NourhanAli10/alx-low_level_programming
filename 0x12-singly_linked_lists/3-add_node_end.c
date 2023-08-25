#include "lists.h"

/**
 * add_node_end - adds a new node at the end.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;
	if (*head == NULL)
	{

		*head = temp;
		return (temp);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;
	return (temp);
}
