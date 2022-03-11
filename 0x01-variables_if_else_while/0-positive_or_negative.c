#include  <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - decribes the variable n which is a number
 * that can be positive, negative or zero
 *
 * Return: positive if number if greater than zero
 * negative if is less than zero and
 * zero if number is equal to zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else
		if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("0 is zero\n");
	return (0);
}
