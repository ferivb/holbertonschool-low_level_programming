#include "dog.h"
#include <stdio.h>

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
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	return (n_dog);
}
