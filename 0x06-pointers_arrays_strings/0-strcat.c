#include "main.h"
/**
  * _strcat - concatenate one string into another
  *
  * @dest: destination string
  * @src: source string
  *
  * Return: return a pointer
  */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	char *ptr;

	ptr = dest;
	return (ptr);
}
