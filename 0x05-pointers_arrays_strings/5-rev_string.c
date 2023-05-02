#include "main.h"
#include <string.h>
/**
*  rev_string - function that reverse a string
* @s: the pointer that holds the string
*/
void rev_string(char *s)
{
int len = strlen(s);
int i, j;
char temp;
for (i = 0, j = len - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
