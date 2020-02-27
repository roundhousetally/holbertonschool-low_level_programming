#include "holberton.h"

/**
 *is_palindrome - checks if a string is a palindrome
 *
 *@s: the string to check
 *
 *Return: 1 if palindrome, 0 if not.
 */
int _strlen_recursion(char *s);
int custpal(char *s, int b, int e);
int is_palindrome(char *s)
{
	int st, e;

	st = 0;

	e = _strlen_recursion(s) - 1;

	return (custpal(s, st, e));

}
/**
 *custpal - iterates through a string checking if its a palindrom
 *
 *@b: beginning of string
 *@e: end of string
 *@s: the string
 *Return: 1 if palindrome, 0 if not
 */
int custpal(char *s, int b, int e)
{

	if (e == -1 && s[b] == '\0')
	{
		return (1);
	}
	if (e != -1 && s[b] != '\0' && s[b] == s[e])
	{
		return (custpal(s, ++b, --e));
	}
	else
		return (0);
}
/**
 *_strlen_recursion -recursively get the length of a string
 *
 *@s: the string to calculate length
 *
 *Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
