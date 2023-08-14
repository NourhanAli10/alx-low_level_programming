#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - Copies a string from source to destination
 * @dest: dest Pointer to the destination buffer
 * @src: src Pointer to the source string
 * Return:Pointer to the beginning of the destination string
 */

char *_strcpy(char *dest, const char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}


/**
 * new_dog - function that creates a new dog
 * @name: value of the name member
 * @age: value for the age member
 * @owner: value for the owner member
 * Return: the new pointer with new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(_strlen(name) + 1);
	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);
	return (new_dog);
}


