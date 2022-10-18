#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  * sum_them_all - a function that returns the sum of all its parameters.
  * return 0 when n = 0
  * @n: number
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list my_var;

	va_start(my_var, n);
	while (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(my_var, int);
		}
		va_end(my_var);
		return (sum);
	}
	return (0);
}
