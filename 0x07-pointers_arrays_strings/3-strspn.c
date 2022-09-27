/**
  * _strspn - a function that gets the length of a prefix substring
  * @s: string to check for length
  * @accept: string tocheck the byte
  *
  * Return: Returns the number of bytes in the initial segment of
  * s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	int match = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{

				if (s[i] == accept[j])
				{
					match++;
				}
			}
		}
		else
		{
			return (match);
		}
		i++;
	}
	return (match);
}
