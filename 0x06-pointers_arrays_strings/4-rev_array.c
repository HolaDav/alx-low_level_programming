#include "main.h"

/**
 * reverse_array - reverses the content array
 * @a: array a
 * @n: number on element of an array a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - 1 - 1];
		a[n - 1 - 1] = j;
	}
}
