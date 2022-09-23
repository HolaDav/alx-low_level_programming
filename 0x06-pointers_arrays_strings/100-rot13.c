#include "main.h"

/**
 * rot13 - encodes suing rot13
 * @str: string encoded
 *
 * Return: string
 */

char *rot13(char *str)
{
	int i = 0;
	int j;
	char alpha[26];

	while (str[i])
	{
		j = 0;
		for (alpha[j] >= 'a'; j++)
		{
			if (str[i] == alpha[j] && str[i] == alpha[j] - 32)
			{
				str[i] =+ 13;
			}
		}
		i++;
	}
	return (str);
}
