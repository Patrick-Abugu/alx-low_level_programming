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
	char i;

	for (i = 0; *s != '\0'; ++i)
		return (i);
}
