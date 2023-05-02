#include "main.h"
/**
*  puts2 - function that print every character of a string
* @str: the pointer that holds the string
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0' ; i+= 2)
{
_putchar(str[i]);
}
_putchar('\n');
}





















