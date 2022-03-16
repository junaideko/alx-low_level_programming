#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers, starting with
 * 1 and 2.
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int t1, t2, nextterm;

	t1 = 1;
	t2 = 2;
	printf("%ld, %ld", t1, t2);
	for (c = 0; c < 48; c++)
	{
		nextterm = t1 + t2;
		printf(", %ld", nextterm);
		t1 = t2;
		t2 = nextterm;
	}
	printf("\n");
	return (0);
}
