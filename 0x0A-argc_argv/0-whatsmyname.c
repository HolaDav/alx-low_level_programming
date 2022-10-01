#include "main.h"
#include <stdio.h>

/**
 * main - prints it's function's name
 * @argc: count arguments
 * @argv: Hold the string value of arguments
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("The name of my file is: %s\n", argv[0]);
	return (0);
}
