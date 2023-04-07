#include "main.h"

/**
 * set_bit - the value of a bit to 1
 * @index: Starts from 0 of selected bit
 * @n: Pointer of 1
 * Return: 1 if successful, or -1 if in error
 */
int set_bit(unsigned long int *n, unsigned in index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i=1 << index;
	*n = *n | i;

	return (1);
}
