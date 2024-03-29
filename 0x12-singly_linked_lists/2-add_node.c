#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head:  pointer to the head of the list
 * @str: string
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = length(str);
	new_node->next = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * length - get the length of string
 * @str: string
 * Return: length
*/

int length(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
