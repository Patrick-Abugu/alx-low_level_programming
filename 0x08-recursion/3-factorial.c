#include "main.h"

/**
  * factorial - a function that returns the factorial of a given number
  * @n: number to finds its factorial
  * Return: return the factrial
  */

int factorial(int n)
{
	int factori;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	factori = n * factorial(n - 1);
	return (factori);
}
