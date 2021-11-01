#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - enunciates dog info
  *@name: name of the dog
  *@age: age of the dog
  *@owner: dog owner
  */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef dog dog_t;


#endif
