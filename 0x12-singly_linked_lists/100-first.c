#include "lists.h"

void print_first(void)__attribute__ ((constructor));

/**
* print_first - print before the main
*/

void print_first(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}