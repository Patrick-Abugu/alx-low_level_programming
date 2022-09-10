#include <stdio.h>
/**
* main - the head fn
*
* Return: returns zero
*
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == j && j == 9)
				continue;
			putchar(',');
			putchar(' ')
		}
	}
	putchar("\n");
	return (0);
}
