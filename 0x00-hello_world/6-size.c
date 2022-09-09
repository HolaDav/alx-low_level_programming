#include <stdio.h>

/**
 * main - size of types on computer
 *
 * Return: Alwaus (0) success
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld	byte(s)\n", sizeof(a));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(b));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
