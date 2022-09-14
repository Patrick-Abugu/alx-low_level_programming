#include "main.h"

/**
  * jack_bauer - prints all hours ans minutes
  *
  * Return: always return 0
  */

void jack_bauer(void)
{
	int hour = 0;
	int minute;

	while (hour < 25)
	{
		minute = 0;
		while (minute <= 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			minute++;
			_putchar('\n');
		}
		hour++;
	}
}
