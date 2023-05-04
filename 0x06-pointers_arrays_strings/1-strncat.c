#include "main.h"
/**
* _strncat - concatenate two strings
* @dest: input value
* @src: input value
* @n: input value
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int in = 0;
int len = 0;
while (dest[in++])
{
len++;
}
for (in = 0; src[in] && in < n; in++)
{
dest[len++] = src[in];
}
return (dest);
}

