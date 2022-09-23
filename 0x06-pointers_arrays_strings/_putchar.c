#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * ON error, -1 is returnedm and and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
