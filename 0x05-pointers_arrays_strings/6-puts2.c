#include "main.h"

/**
 * puts2 - prints every character of a string followed by a new line
 * @str: string parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, n = 0;

	while (str[i++])
	{
		n++;
	}
	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
