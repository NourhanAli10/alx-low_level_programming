#include "main.h"
/**
* _atoi - function that convert a string to an integer.
* @s: the pointer that store the value of the string
* Return: dest
*/
int _atoi(char *s)
{
int a = 0;
unsigned int n = 0;
int min = 1;
int b = 0;
while (s[a])
{
if (s[a] == 45)
{
min *= -1;
}
while (s[a] >= 48 && s[a] <= 57)
{
b = 1;
n = (n * 10) + (s[a] - '0');
a++;
}
if (b == 1)
{
break;
}
a++;
}
n *= min;
return (n);
}
