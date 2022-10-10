#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - a function that prints elements of a struct
  * @d: represent struct pointer
  *
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nill)\n");
			
		}

		if (d->owner == NULL)
		{
			printf("(nill)");
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("%s\n", d->owner);

	}
}
