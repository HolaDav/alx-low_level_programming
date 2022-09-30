#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - Finds the square root of a number
 * @n: Number to find it's square root
 *
 * Return: Return square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	root = _sqrt_recursion(n / root);
	if ((root % 1) != 0)
	{
		return (0);
	}
	return (root);
}
