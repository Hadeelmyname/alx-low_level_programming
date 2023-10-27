#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to contain a binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int o;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (o = 0; b[o] != '\0'; o++)
	{
		if (b[o] != '0' && b[o] != '1')
			return (0);
	}
	for (o = 0; b[o] != '\0'; o++)
	{
		number <<= 1;
		if (b[o] == '1')
			number += 1;
	}
	return (number);
}
