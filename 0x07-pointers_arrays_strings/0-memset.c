/**
  * *_memset - fills the first n bytes of the memory area
  * pointed to by s with the constant byte b
  * @s: memory pointer to be prepopulated
  * @b: constant to be prepopulated with
  * @n: number of times to populate the memory
  *
  * Return: return a pointer to the memory, s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
