#include <stdio.h>

/**
 * main - resolved an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	print("infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		i++; /*putchar(i);*/
	}

	printf("infinite loop avoided! \\o/\n");

	return (0);
}
