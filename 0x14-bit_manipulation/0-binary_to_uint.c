#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number. Otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0, length = 0;

	if (b == NULL)
		return (0);

	while (b[length])
		length++;

	length -= 1;
	while (b[i])
	{
		if ((b[i]) != '0' && (b[i] != '1'))
			return (0);
		if (b[i] == '1')
			result += (1 * (1 << length));
		i++;
		length--;
	}
	return (result);
}
