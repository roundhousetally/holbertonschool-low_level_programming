#include "holberton.h"

/**
 *cap_string - capitalizes all words of a string
 *
 *@s: the string
 *
 *Return: string
 *
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
		    s[i] == '?' || s[i] == '"' || s[i] == '('
		    || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}

		}
	}
	return (s);
}
