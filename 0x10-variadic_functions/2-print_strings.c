#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - prints strings sepersted by a seperator
  * @seperator: char seperating the strings
  * @n: number of strings
  * Return: the strings or null if nill
  * if seperator is null dont print it
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_str;
	char *str;

	va_start(my_str, n);
	str = va_arg(my_str, char *);

	for (i = 0; i < n; i++)
	{
		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);

		if (separator != NULL && i < (n - 1) )
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(my_str);



}
