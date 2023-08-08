#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - c returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: the string that want to duplicate
 * Return: the new duplicated string
 */

char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = malloc((sizeof(char)) * (length + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';
	return (duplicate);
}
