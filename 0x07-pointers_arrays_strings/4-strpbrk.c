#include "main.h"

/**
  * _strpbrk - a function that locates the first occurrence in the string s
  * of any of the bytes in the string accept
  *
  * @s: string to check in for occurence of a byte
  * @accept: the byte to check for its occurence
  *
  * Return: a pointer to the byte in s that matches one of
  * the bytes in accept, or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *nptr;

	i = 0;
	nptr = NULL;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
			return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (nptr);
}
