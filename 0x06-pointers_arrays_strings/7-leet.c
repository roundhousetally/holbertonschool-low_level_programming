#include "holberton.h"

/**
 *leet- encodes a string into 1337
 *
 *@s: the string
 *Return: the string
 *
 */
char *leet(char *s)
{
	int i;

	char *a = a;
	char *e = e;
	char *o = o;
	char *t = t;
	char *l = l;


	for(i = 0; i != '\0'; i++)
	{
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o'||
		   s[i] == 't' || s[i] == 'l')
		{
			*a = 4;
			*e = 3;
			*o = 0;
			*t = 7;
			*l = 1;
		}
	}
	return (s);
}
