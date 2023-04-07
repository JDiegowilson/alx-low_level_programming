#include "main.h"

/**
 * binary_to_uint - Changing binary to unsigned int
 * @b: pointing to a string of 0 and 1 char
 *
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int j;

    if (!b)
    {
        printf("Error: Input string is null\n");
        return (0);
    }

    j = 0;

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
        {
            printf("Error: Invalid character in input string\n");
            return (0);
        }
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        j <<= 1;
        if (b[i] == '1')
            j += 1;
    }

    return (j);
}
