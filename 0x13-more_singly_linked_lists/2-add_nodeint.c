#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head:  pointer to pointer to a structure
 * @n: an integer number
 * Return:  returns a pointer to the newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_pon;

	new_pon = malloc(sizeof(listint_t));

	if (new_pon == NULL)
		return (NULL);

	new_pon->n = n;
	new_pon->next = *head;
	*head = new_pon;
	return (new_pon);
}
