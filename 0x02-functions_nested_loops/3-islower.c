#include "main.h"
/**
  * _islower - the main function
  *
  * @c -any input
  *
  * Return: always zero
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
