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
	char *A = A;
	char *E = E;
	char *O = O;
	char *T = T;
	char *L = L;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' ||
		    s[i] == 't' || s[i] == 'l')
		{
			*A = *a;
			*E = *e;
			*O = *o;
			*T = *t;
			*L = *l;
			*A = 4;
			*E = 3;
			*O = 0;
			*T = 7;
			*L = 1;
		}
	}
	return (s);
}
