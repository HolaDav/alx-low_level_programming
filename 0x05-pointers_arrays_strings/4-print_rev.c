#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - printing a string
 * @s: string in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int n;

	n = strlen(s);
	while (n--)
	{
		putchar(*(s + n));
	}
	putchar('\n');
}
