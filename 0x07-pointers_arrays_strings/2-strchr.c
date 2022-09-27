#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be scanned
 * @c: characrer to be searchedin s
 *
 * Return: pointer to c
 * NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
