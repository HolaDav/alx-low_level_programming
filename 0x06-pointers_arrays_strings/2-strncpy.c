#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: strint 2
 * @n: parameter indicating the number of n
 *
 * Return: string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
