#include "main.h"

/**
 * _strcat - Appends two strings
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len, len1;

	len = 0;
	len1 = 0;
	while (dest[len])
	{
		len++;
	}
	for (len1 = 0; src[len1] != '\0'; len1++)
	{
		dest[len] = src[len1];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
