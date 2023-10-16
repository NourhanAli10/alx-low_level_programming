#include "main.h"
#include <string.h>
/**
* _strlen - function that returns the length of a string
* @s: the pointer that holds the value of pointer str
* Return: i
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}









