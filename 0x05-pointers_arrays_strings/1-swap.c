#include "main.h"

/**
  * swap_int - swap value of two int
  *
  * @a: first int
  * @b: second int
  *
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = c;
	*a = *b;

}
