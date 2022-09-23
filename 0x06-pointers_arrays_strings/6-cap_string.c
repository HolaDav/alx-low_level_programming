#include "main.h"

/**
 * cap_string - capitalizes all words of a srting
 * @str: string parameter
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '.')
		{
			j = i + 1;
			if (str[j] >= 97 && str[j] <= 122)
			{
				i = j;
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
