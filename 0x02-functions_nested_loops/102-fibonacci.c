#include <stdio.h>

/**
 * main - print first 50 fi
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;
	long a = 1, b = 2;
	long sum = a + b;

	printf("%ld, %ld, ", a, b);
	for (i = 3; i < 50; ++i)
	{
		printf("%ld, ", sum);
		a = b;
		b = sum;
		sum = a + b;
	}
	if (i == 50)
	{
		printf("%ld ", sum);
	}
	printf("\n");
	return (0);
}
