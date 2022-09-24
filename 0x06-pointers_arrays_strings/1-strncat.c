#include "main.h"

/**
  **_strncat - concatenatee string into another
  *
  * @dest: destination string
  * @src: source string
  * @n: number of times to interate through src length
  *
  * Return: return the destination
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i  = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
