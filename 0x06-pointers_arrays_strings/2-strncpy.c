#include "main.h"

/**
  * _strncat - concatenates two strings
  *
  * @dest: destination text
  * @src: source text
  * @n: number of times to iterate
  * Return: return the destination text
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
