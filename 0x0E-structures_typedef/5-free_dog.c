#include "dog.h"

/**
  * free_dog - lets the dogs out
  * @d: dogs
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
