#include "main.h"
/**
*  puts2 - function that print every character of a string
* @str: the pointer that holds the string
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
