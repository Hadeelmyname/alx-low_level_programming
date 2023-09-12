#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: is character to be tested
 * Return: 1 for positive n ,return 0 for zero,return -1 if n is less than zero
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar (43);
return (1);
}
else if (n == 0)
{
_putchar (0);
return (0);
}
else
{
_putchar (45);
return (-1);
}
}
