#include "holberton.h"
#include <stdlib.h>
#include "_strlen.c"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: pointer to filename to create
 * @text_content: text that goes inside the newly made file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrte, len;

	if (filename == NULL)
		return (-1);

	opn = open(filename, O_WRONLY | O_APPEND);

	if (opn == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		wrte = write(opn, text_content, len);
		if (wrte == -1)
			return (-1);
	}

	close(opn);

	return (1);
}
