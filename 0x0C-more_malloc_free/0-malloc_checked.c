#include "main.h"

/**
  * *malloc_checked - a function that allocates memory using malloc
  *
  * @b: unsigned int to check
  *
  * Return: retturn 98 or a pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}

	return (str);
}
