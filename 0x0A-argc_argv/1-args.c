#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: counts arguments
 * @argv: Holds string value of argumrnts
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc -1);
	return (0);
}
