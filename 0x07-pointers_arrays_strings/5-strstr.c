#include "holberton.h"
#define NULL 0

/**
 *_strstr - finds the first occurence of the substring needle
 *in the string haystack
 *@haystack: string to be checked
 *@needle: what we are looking for in haystack.
 *
 *Return: a pointer to the beginning of the located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (Begin);

		haystack = Begin + 1;
	}
	return (NULL);
}
