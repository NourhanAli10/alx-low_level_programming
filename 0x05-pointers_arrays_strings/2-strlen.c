#include "main.h"
#include <string.h>
/**
* _strlen - function that returns the length of a string
* @s: the pointer that holds the value of pointer str
*/
int _strlen(char *s)
{
int i;
for (i = 0; i < *s; i++)
{
_putchar(i);
}
return (i);
}

