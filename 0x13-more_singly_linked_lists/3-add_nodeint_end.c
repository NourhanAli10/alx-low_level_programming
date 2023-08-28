#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head:  pointer to pointer to a structure
 * @n: an integer number
 * Return:  returns a pointer to the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_pointer, *traver;

	new_pointer = malloc(sizeof(listint_t));
	if (new_pointer == NULL)
		return (NULL);

	traver = *head;

	new_pointer->n = n;
	new_pointer->next = NULL;

	if (*head == NULL)
	{
		*head = new_pointer;
		return (new_pointer);
	}
	while (traver->next != NULL)
	{
		traver = traver->next;
	}
	traver->next = new_pointer;
	return (new_pointer);
}
