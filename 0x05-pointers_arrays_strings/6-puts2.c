#include "main.h"
/**
*  puts2 - function that print every character of a string
* @str: the pointer that holds the string
*/
void puts2(char *str)
{
int i = 0;
int a = 0;
char *b = str;
int c;
while (*b != '\0')
{
b++;
i++;
}
a = i - 1;
for (c = 0 ; c <= a ; c++)
{
if (c % 2 == 0)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
