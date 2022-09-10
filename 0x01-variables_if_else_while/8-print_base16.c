#include <stdio.h>
/**
  * main -the main fn
  *
  * Return: returns 0
  *
  */
int main(void)
{
	unsigned char b = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(b);
		b++;
	}
	b = '1';

	for (i = 0; i < 6; i++)
	{
		putchar('0' + b);
		b++;
	}
	putchar('\n');
	return (0);

}
