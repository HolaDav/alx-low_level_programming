#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches string for any set of bytes
 * @s: string searched
 * @accept: bytes to search for
 *
 * Return: pointer to byte s
 * that matches bytes in accept
 * NULL of not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
