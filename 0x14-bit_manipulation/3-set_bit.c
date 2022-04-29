#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int trl = 1;

	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);

	if (index > max_bits)
		return (-1);

	trl <<= index;

	*n = (*n | trl);

	return (1);
}
