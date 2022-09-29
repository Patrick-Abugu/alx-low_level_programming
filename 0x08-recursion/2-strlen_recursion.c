#include "main.h"


/**
  * _strlen_recursion - a function that returns the length of a string.
  *
  * @s: String to check for its length
  *
  * Return: int value of the length
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		int length;

		length = _strlen_recursion(s + 1);
		return (1 + length);
	}
	else
	{
		return (0);
	}
}

