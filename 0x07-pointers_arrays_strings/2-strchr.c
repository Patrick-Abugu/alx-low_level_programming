#include "main.h"

/**
  * *_strchr - Returns a pointer to the first occurrence of the character
  * c in the string s, or NULL if the character is not found
  *
  * @s: string to check for occurence of a character
  * @c: character to check for its occurence
  *
  * Return: pointer to the character first occurence
  */

char *_strchr(char *s, char c)
{
	int i;
	char *nptr;

	i = 0;
	nptr = NULL;
	while (s[i] != '\0')
	{
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (nptr);
	}
}
