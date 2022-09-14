#include "main.h"
/**
  * _isalpha - check if an alphabet
  *
  * @c: int to be checked
  *
  * Return: always 0
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
