#include "main.h"

/**
 * print_number - Prints an integer
 * @c: The integer to be printed.
 *
 * Return: void
 */

void print_number(int c)
{
	unsigned int num = c;

	if (c < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
