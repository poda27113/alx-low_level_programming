#include "main.h"
#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, n = 50;
	unsigned long a = 1, b = 2, c;
	
	printf("%lu, %lu", a, b);
	
	for (i = 3; i <= n; i++)
{
	c = a + b;
	printf(", %lu", c);
	a = b;
	b = c;
}
	printf("\n");
	return (0);
}
