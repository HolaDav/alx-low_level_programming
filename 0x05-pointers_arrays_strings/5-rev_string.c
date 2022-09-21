#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a strings
 * @s: srting variable
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, length1, length2;
	char tmp;

	while (s[length1] != '\0')
	{
		length1++;
	}
	length2 = length1 - 1;
	for (i = 0; i < length1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}
