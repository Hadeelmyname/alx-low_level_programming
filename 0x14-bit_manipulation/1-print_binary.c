#include "main.h"

/**
 * _powe - function that calculates power
 * @base: base of exponent
 * @power: the power of exponent
 * Return: value pf power
 */
unsigned long int _powe(unsigned int base, unsigned int power)
{
	unsigned long int u;
	unsigned int z;

	u = 1;
	for (z = 1; z <= power; z++)
		u *= base;
	return (u);
}

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, ch;
	char f;

	f = 0;
	div = _powe(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		ch = n & div;
		if (ch == div)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
