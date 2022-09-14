#include "main.h"

/**
  * print_times_table - n times table
  *
  * @n: the nth time
  *
  * Return: return thr numbr
  */

void print_times_table(int n)
{
	int i = 0;
	int j;
	int value;

	scanf("%d", &n);

	if (n >=0 && n <= 15)
	{
		while (i <= n)
		{
			j =  0;
			while (j <= n)
			{
				value = i * j;
				_putchar('0' + value);
				_putchar(',');
				_putchar(' ');
				j++;
			}
		}
		_putchar('\n');
		i++;
	}
}
