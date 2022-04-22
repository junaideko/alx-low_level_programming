#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: the character to print
 *
 * Return: on sucess 1
 * on erroe, -l is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
