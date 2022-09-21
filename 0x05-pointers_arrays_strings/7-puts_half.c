#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string parameter
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	j = ((i / 2) + 1);
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		putchar((i - 1) / 2);
	}
	else
	{
		while (i >= j)
		{
			putchar(str[i]);
			i++;
		}
	}
	putchar('\n');
}
