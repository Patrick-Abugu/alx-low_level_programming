#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - print from n to 98
  *
  * @n: number to be printed
  *
  * Return: return the number
*/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}