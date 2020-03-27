#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <unistd.h>

/** 0 */
unsigned int binary_to_uint(const char *b);

/** 1 */
void print_binary(unsigned long int n);
int _putchar(char c);

/** 2 */
int get_bit(unsigned long int n, unsigned int index);

/** 3 */
int set_bit(unsigned long int *n, unsigned int index);

/** 4 */
int clear_bit(unsigned long int *n, unsigned int index);

/** 5 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int countbits(int n);

/** 6 */
int get_endianness(void);

#endif
