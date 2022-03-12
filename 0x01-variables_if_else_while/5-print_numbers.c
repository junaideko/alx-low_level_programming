#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit in
 * base ten starting from zero
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
