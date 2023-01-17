#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *strcopy(char *dest, char *str);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of the string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->name = strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = strcopy(doggo->owner, owner);

	return (doggo);
}
