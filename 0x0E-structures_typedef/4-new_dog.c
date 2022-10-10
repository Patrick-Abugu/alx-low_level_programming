#include "dog.h"
#include <stdlib.h>

/**
  * *new_dog - function creates a mew dog
  * @name: name of dog
  * @agwe: age of dog
  * @owner: owners name
  *
  * Return: new dog or null
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;
	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
	{
		return (NULL);
	}

	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;
	return (mydog);
}

