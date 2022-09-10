#include<stdio.h>
/**
  *main is the main function
  *
  *Return: always returns 0
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
