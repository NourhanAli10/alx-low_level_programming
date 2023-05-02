#include "main.h"
/**
*  _puts - function that prints a string
* @str: the pointer that holds the value of pointer str
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
