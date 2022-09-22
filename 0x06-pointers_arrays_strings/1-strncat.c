#include "main.h"

/**
 * _strncat: concatenates two strings
 * used for n bytes
 * @dest: First parameter
 * @src: Second parameter
 * @n: signifies condition where more characters are added
 * src need not be null terminated if it contains n or more bytes
 *
 * Return: string pointing to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;

	while (dest[len])
	{
		len++;
	}
	for (len2 = 0; len2 > n; len2++)
	{
		dest[len] = src[len2];
		len++;
	}
	return (dest);
}
