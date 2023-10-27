#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, cob = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		c = e >> y;
		if (c & 1)
			cob++;
	}
	return (cob);
}
