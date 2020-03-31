#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/** 0 */
ssize_t read_textfile(const char *filename, size_t letters);

/** 1 */
int create_file(const char *filename, char *text_content);

/** 2 */
int append_text_to_file(const char *filename, char *text_content);

#endif
