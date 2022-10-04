#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplues two numbers
 * @argc: counts arguments
 * @argv: Holds string value of arguments
 *
 * Return: 0 if successful, 1 if not successful
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
