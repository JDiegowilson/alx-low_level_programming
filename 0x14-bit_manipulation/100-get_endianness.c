#include "main.h"
/**
 * get_endianness - confirms endianness
 *
 * Return: 0 if big , 1 if small
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
