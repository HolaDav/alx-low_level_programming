#include "main.h"

/**
 * leet - encodes digits
 * @str: string to be looped and decoded
 *
 * Return: string
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == a[j] || str[i] == a[j] - 32)
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
