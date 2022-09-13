#include "main.h"
/**
  * _islower - the main function
  *
  * Return: always zero
  */

int _islower(int c)
{
	char c;

	scanf("%c", &c);
	if (c > 64 && c < 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
