#include "main.h"
/**
  * print_alphabet_x10 - print x10
  *
  * Return: always zero
  */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar("ch");
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
