#include "main.h"
/**
  * _islower - the main function
  *
  * c -any input
  *
  * Return: always zero
  */

int _islower(int c)
{
	scanf("%d", &c);
	if (c > 64 && c < 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
