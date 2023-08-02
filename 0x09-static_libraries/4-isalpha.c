#include "main.h"
/**
* _isalpha - that checks for alphabetic character.
* @c : the character in Asci table
* Return: 1 for lowercase or uppercase. 0 for otherwise
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
