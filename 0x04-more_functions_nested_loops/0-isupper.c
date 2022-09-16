#include "main.h"

/**
 * _isupper - checks uppercase
 *
 * @c: checks input of function
 *
 * Return: (1) if c is uppercase and (0) if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
