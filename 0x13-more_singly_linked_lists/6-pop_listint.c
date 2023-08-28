#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head:  pointer to pointer to a structure
 * Return:  the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (n);
}
