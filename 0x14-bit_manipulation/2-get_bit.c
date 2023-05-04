#include <limits.h>

/**
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to get
 * Returns: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	    if (index >= sizeof(unsigned long int) * CHAR_BIT)
		            return -1;

	        return (n >> index) & 1;
}
