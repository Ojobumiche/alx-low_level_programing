#include "main.h"

/**
 * binary_to_uint - converts binary num to uint binary.
 * @b: binary number as string.
 * Return: converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1. b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, size, x, exp;

	if (!b)
		return (0);
	size = _strlen(b);
	x = 0;
	dec = 0;
	exp = size - 1;

	while (b[x])
	{
		if (b[x] == '1')
			dec += power(2, exp);
		else if (b[x] != '0')
			return (0);
		exp--;
		x++;
	}
	return (dec);
}

