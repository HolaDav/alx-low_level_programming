#include "main.h"
#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Stors string value of arguments
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
