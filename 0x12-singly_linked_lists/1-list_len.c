#include "lists.h"

/**
 * list_len - return the number of elements in linked  list.
 * @h: pointer to list_t type
 * Return: count of elements size_t
*/

size_t list_len(const list_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}

