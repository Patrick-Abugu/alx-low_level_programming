#include "main.h"

/**
  * times_table - prints 9x table
  *
  * Return
  */

void times_table(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar('0' + i * j);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
