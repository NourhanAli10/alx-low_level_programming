#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t type
 * Return: count of elements size_t
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
