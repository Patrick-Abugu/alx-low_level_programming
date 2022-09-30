#include "main.h"

/**
  * is_prime_number - function thats check if a number is prime
  * @n: number to check
  * Return: 1 if prime, 0 if not
  */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n == 1 || n == -1)
	{
		return (0);
	}
	return (1);
}

