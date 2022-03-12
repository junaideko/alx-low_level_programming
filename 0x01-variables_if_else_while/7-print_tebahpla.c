#include <stdio.h>
#include <stdlib.h>
/**
 * main - putchar prints lower case
 * alphabetics in reverse
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
