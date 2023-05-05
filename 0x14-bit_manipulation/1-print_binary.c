#include <stdio.h>
#include "main.h"

/**
 * Prototype: void print_binary(unsigned long int n);
 * print binary of numder
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);
	putchar((n & 1) ? '1' : '0');
}
