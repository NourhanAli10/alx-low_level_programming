#include "lists.h"

/**
 * free_listint - that frees a listint_t list
 * @head:  pointer to a structure
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *current;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
