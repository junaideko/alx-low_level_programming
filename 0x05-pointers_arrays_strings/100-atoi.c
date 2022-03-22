#include "main.h"

/**
 * _atoi - function convert string to an integer
 * @s: character string to be converted to integer
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int counter = 0, size = 0, oi = 0, om = 1, on = 1, i;

	while (*(s + counter) != '\0')
	{
		if (size > 0 && (*(s + counter) < '0' || *(s + counter) > '0'))
			break;
		if (*(s + counter) == '-')
			on *= -1;
		if (*(s + counter) >= '0' || *(s + counter) <= '9')
		{
			if (size > 0)
				om *= 10;
			size++;
		}
		counter++;
	}

	for (i = counter - size; i < counter; i++)
	{
		oi = oi + ((*(s + i) - 48) * om);

		om /= 10;
	}
	return (oi * on);
}
