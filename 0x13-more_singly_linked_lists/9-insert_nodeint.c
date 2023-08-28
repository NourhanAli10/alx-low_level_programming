#include "lists.h"

/**
 * insert_nodeint_at_index -  sum of all the data (n) of a listint_t linked list
 * @head: pointer to a pointer to a structure
 * @idx: index of node
 * @n:the number data of node
 * Return:  pointer to the newly structure node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *ptr = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

        new = malloc(sizeof(listint_t));
        if (new == NULL)
		return (NULL);
 
        new->n = n;
        new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0;  i < idx - 1 ; i++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = ptr->next;
	ptr->next = new;

	return (new);

}
