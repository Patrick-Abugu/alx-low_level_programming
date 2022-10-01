#include "main.h"

/**
  * main - a program that adds positive numbers
  * @argc: argument count
  * @argv: argument variables
  *
  * Return: 0 0r 1
  */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc < 2)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		sum = 0;
		if (atoi(argv[i]) >= 0 || atoi(argv[i]) < 0)
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
		printf("Error\n");
		return (1);

	}
	return (0);
}
