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
	int value;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			value = i * j;
			if (value != 0 && !(value < 9) && !(value > 9))
			{
				continue;
			}
			else
			{
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
