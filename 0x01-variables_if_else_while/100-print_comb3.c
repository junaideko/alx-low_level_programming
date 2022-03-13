#include <stdio.h>
#include <stdlib.h>

/**
 * main - putchar print all possible smallest combination
 * of two digits with variable type int
 *
 * Return: 0
 */
int main(void)
{
	int i, p;

	for (i = 48; i < 57; i++)
	{
		for (p = 49; p < 58; p++)
		{
			if (p > i)
			{
				putchar(i);
				putchar(p);

				if (i != 56 || p != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
