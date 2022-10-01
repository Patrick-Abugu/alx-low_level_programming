#include "main.h"

/**
  * main - a program that prints the number of arguments passed into it
  * @argc: argument count;
  * @argv: argument variables
  *
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc);
	return (0);
}
