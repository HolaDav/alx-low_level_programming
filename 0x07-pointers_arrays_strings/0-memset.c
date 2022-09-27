#include "main.h"
#include <string.h>

/**
 * _memset - fill memory with a constant byte
 * @s: memory space to be filled
 * @b: byte to fill with
 * @n: number of spaces to fill
 *
 * Return: pointer to a memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	memset(s + i, b, n * sizeof(s));
	return (s);
}
