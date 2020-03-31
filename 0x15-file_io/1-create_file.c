#include "holberton.h"
#include "_strlen.c"

/**
 * create_file - creates a file
 * @filename: pointer to filename to create
 * @text_content: text that goes inside the newly made file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wrte, len;

	if (filename == NULL)
		return (-1);

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (opn == -1)
		return (0);

	if (text_content == NULL)
		text_content = "";

	len = _strlen(text_content);

	wrte = write(opn, text_content, len);

	if (wrte == -1)
		return (-1);

	close(opn);

	return (1);
}
