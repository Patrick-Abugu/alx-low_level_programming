#include "main.h"

/**
  * _strlen - length of a string
  *
  * @s: string to return the length
  *
  * Return: The string length
  */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		*s++;
	}
	return (length);
}
