#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * main - copies contents of 1 file to another file
 * @argc: Argument count
 * @argv: vars
 * Return: 1 on success, -1 on failure
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wrt = 1;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
			argv[2]), exit(99);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	rd = read(file_from, buffer, 1024);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	while (rd != 0)
	{
		wrt = write(file_to, buffer, rd);
		if (wrt == -1 || rd != wrt)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
		rd = read(file_from, buffer, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n",
				argv[1]), exit(98);
	}
	wrt = close(file_from);
	if (wrt == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from),
			exit(100);
	wrt = close(file_to);
	if (wrt == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to),
			exit(100);
	return (0);
}
