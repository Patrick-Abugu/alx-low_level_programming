#include "main.h"

/**
  * *string_nconcat - a function that concatenates two strings
  * The returned pointer shall point to a newly allocated space in memory
  * which contains s1, followed by the first n bytes of s2, and null terminated
  *
  * if n is greater or equal to the length of s2 then use the entire string s2
  * @s1: first string
  * @s2: second string
  * @n: number of byteof s2 to concatenate
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int k;
	unsigned int len;

	if (s1 == NULL)
	{
		s1 = ""; /*if s1 is not entered, make it an empty string*/
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1])
	{
		len1++; /*get length of s1*/
	}

	len2 = 0;
	while (s2[len2])
	{
		len2++; /*get the length of s2*/
	}
	len2++; /*add null terminator*/

	len = len1 + len2; /*total length of concatenated str s3*/
	s3 = malloc(len * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL); /*return null if malloc fails*/
	}

	i = 0;
	while (i < len1)
	{
		s3[i] = s1[i]; /*copies everything in s1 into s3*/
		i++;
	}

	if (n < len2)
	{
		k = 0;
		while (k < n) /*appends only the first n characters*/
		{
			s3[i] = s2[k];
			i++;
			k++;
/*			printf("%s\n", s3);*/
		}
	}
	else
	{
		k = 0;
		while (k < len2) /*appends every character of s2 to s3*/
		{
			s3[i] = s2[k];
			i++;
			k++;

		}
	}
/*	printf("Length of string s2 is : %d\n", len2);*/
	return (s3);
}
