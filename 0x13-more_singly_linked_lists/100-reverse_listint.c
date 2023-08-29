#include "lists.h"

/**
 * reverse_listint -   reverses a listint_t linked list
 * @head: pointer to a pointer to a structure
 * Return:  pointer to the newly structure node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	ptr = NULL;
	temp =  NULL;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = ptr;
	}
	*head = temp;
	return (*head);
}

