#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string followed by a new line
 * @str: string variable
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
