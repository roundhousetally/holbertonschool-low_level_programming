#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring.
 *
 *@s: initial segment
 *@accept: substring
 *Return: the number of bytes in first string that consists of bytes
 *from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j, k;
	unsigned int m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else
				k = 0;
		}
		if (k == 0)
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
				break;
			}
		}
	}
	return (m);
}
