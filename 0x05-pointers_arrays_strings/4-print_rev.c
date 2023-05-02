#include "main.h"
/**
*  print_rev - function that prints a string in reverse
* @s: the pointer that holds the string
*/
void print_rev(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
while (len > 0)
{
s--;
_putchar(*s);
len--;
}
_putchar('\n');
}

