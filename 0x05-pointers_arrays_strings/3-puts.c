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
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
