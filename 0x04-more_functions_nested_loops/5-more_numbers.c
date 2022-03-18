#include "main.h"

/**
 * more_numbers - function prints ten times the numbers,
 * from zero to fourteen, followed by a new line.
 *
 * Return: always void.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');

		}
		_putchar('\n');

	}

}
