#include <stdio.h>

/**
 * Write a function that checks the endianness.
 * Prototype: int get_endianness(void);
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c == 1);
}