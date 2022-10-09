#include "main.h"

/* *_calloc -a function that allocates memory for an array, using malloc
   *allocates memory for an array of nmemb elements of size bytes each
   *
   * @size: size of bytes to allocate
   * @nmemb: array size or number of elements
   * Return: a pointer to the allocated memory or null
   */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str[1];
	
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str[nmemb] = malloc(sizeof(str[nmemb]) * size);

	if (str[nmemb] == NULL)
	{
		return (NULL);
	}
	return (str[nmemb]);
}

