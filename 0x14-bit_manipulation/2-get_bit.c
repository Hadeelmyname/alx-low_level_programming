#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to check the bits
 * @index: index to check bits
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	c = n & div;
	if (c == div)
		return (1);
	return (0);
}
