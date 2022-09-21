#include "main.h"

/**
 * *_strcpy - copies the string pointed to src
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
