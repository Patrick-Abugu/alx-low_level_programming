#include<stdio.h>
/**
  * main -this the head function
  *
  *Return: always return zero
  *
  */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
