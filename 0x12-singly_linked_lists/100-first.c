#include "lists.h"

void print_first(void)__attribute__ ((constructor));

/**
* print_first - print before the main
*/

void print_first(void)
{
	printf("%s", "You're beat! and yet, you must allow,\n");
	printf("%s", "I bore my house upon my back!\n");
}
