#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0;
	int i, j;
	char *concat;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	concat = malloc((sizeof(char)) * (length1 + 1)
	+ (sizeof(char)) * (length2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}


