#include "main.h"

/**
  * *_memcpy - a function that copies n bytes from
  * memory area src to memory area dest
  * @src: source memory to be copied from
  * @dest: destination memory to be copied into
  * @n: number of byte to be copied
  *
  * Return: return ponter to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
