include "main.h"

/**
 * swap_int - swaps value of two integres.
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int prt;

	prt = *a;
	*a = *b;
	*b = prt;
}
