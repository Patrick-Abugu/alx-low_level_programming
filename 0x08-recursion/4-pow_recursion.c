#include "main.h"

/**
  * _pow_recursion - calculate a number raisedto the power of another
  *
  * @x: base number
  * @y: power to raise
  *
  * Return: answer
  */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	power = x * _pow_recursion(x, (y - 1));

	return (power);
}
