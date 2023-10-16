#include "main.h"
/**
*  *_strcpy - function that copies the string
* @dest: the pointer that store the value of the string
* @src: the pointer that holds the string
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
