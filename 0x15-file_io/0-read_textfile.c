#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and writes an amount of letters to stdout
 * @filename: A pointer to the file
 * @letters: The amount of letters from filename to print
 * Return: Amount of letters read and printed, if the file cannot be opened or
 * read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrte;
	char *bufsize;

	if (filename == NULL)
	{
		return (0);
	}

	bufsize = malloc(sizeof(char) * letters);

	if (bufsize == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, bufsize, letters);
	wrte = write(STDOUT_FILENO, bufsize, rd);

	if (opn == -1 || rd == -1 || wrte == -1 || wrte != rd)
	{
		free(bufsize);
		return (0);
	}
	free(bufsize);
	close(opn);

	return (wrte);
}
