#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @str: string variable
 *
 * Return: void
 */

void _puts(char *str)
{
	str = "My world";
	_puts(str);
	_puts("\n");
}
