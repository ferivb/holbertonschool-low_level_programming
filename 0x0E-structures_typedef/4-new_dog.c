#include "dog.h"
#include <stdio.h>

/**
  * _strcpy - copies a string
  * @dest: destination
  * @src: source
  *
  * Return: string copied
  */
void *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (*src != '\0')
	{
		for (i = 0; src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
	}
	dest[i] = '\0';
	return (dest);
}

/**
  * _strlen - returns a string's lenght
  * @s: string
  *
  * Return: Lenght of the string
  */
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
  * new_dog - stores a new dog in memory
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  *
  * Return: dog's new info
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog)
	{
		n_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
		if (n_dog->name)
		{
			n_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
			if (n_dog->owner)
			{
				_strcpy(n_dog->name, name);
				_strcpy(n_dog->owner, owner);
				n_dog->age = age;
				return (n_dog);
			}
			else
			{
				free(n_dog->name);
				free(n_dog);
			}
		}
		else
		free(n_dog);
	}
	return (NULL);
}
