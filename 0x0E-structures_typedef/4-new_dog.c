#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, char *str);

/**
 * new_dog - creates a new dog.
 * @name: name of dog struct
 * @age: age of dog struct
 * @owner: age of owner struct
 * Return: pointer to new dog profile.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int size_name, size_owner;

	if (name != NULL || owner != NULL)
	{
		n_dog = malloc(sizeof(dog_t));
		if (n_dog == NULL)
			return (NULL);

		size_name = _strlen(name) + 1;
		size_owner = _strlen(owner) + 1;

		n_dog->name = malloc(sizeof(char) * size_name);
		if (n_dog->name == NULL)
		{
			free(n_dog);
			return (NULL);
		}
		n_dog->owner = malloc(sizeof(char) * size_owner);
		if (n_dog->owner == NULL)
		{
			free(n_dog);
			return (NULL);
		}

		n_dog->name = _strcpy(n_dog->name, name);
		n_dog->age = age;
		n_dog->owner = _strcpy(n_dog->owner, owner);
	}

	return (n_dog);
}

/**
 * _strlen - gives the length of a string
 * @str: string to be counted
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: destination of copied string
 * @str: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i++] = '\0';

	return (dest);
}
