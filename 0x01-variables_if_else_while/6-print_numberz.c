#include <stdio.h>
#include <stdlib.h>
/**
 * main - putchar prints all single digit
 * in base ten
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar (i);
	}
	putchar('\n');
	return (0);
}
