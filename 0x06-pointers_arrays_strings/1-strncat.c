#include "main.h"

/**
  * strncat - concatenates two strings
  *
  * @dest: destination text
  * @src: source text
  * @n: number of times to iterate

  * Return: return the destination text
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != src[n])
	{
		dest[i] = src[j]
		i++;
		j++;
	}
	return (dest);
}
