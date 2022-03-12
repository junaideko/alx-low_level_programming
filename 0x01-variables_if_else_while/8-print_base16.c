#include <stdio.h>
#include <stdlib.h>
/**
 * main - putchar prints all numbers of base
 * sixteen in lower case
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
