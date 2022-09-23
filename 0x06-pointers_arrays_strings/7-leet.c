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
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == a[j] || str[i] == a[j] - 32)
			{
				str[i] = n[i];
			}
		}
		i++;
	}
	return (str);
}
