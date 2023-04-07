#include "main.h"

/**
 * binary_to_uint -Changing binary to unsigned int
 * @b: pointing to a string of 0 and 1 char
 *
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char*b)
{
	int i;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i=0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
