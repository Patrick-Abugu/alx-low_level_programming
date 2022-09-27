#include "main.h"

/**
  * _strstr - a function finds the first occurrence of the
  * substring needle in the string haystack
  *
  * @haystack: string to check in
  * @needle: string to check its occurence
  *
  * Return:  a pointer to the beginning of the located substring
  * or NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	int i; /*end of haystck*/
	int j; /*end of needle*/
	int k;
	char *nptr;

	nptr = NULL;
	i = 0;
	while (haystack[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (needle[j] != '\0')
	{
		j++;
	}
	for (k = 0; haystack[k]; k++)
	{
		if (haystack[k] == needle[0] && haystack[i] == needle[j])
		{
			return (&haystack[k]);
		}
	}
	return (nptr);
}
