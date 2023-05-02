#include "main.h"
/**
*  rev_string - function that reverse a string
* @s: the pointer that holds the string
*/
void rev_string(char *s)
{
int len = 0;
while (s[len] != '\0')
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
