#include "main.h"

/**
 * print_last_digit - Prints the digit of number
 * @l: the number to be checked
 * Return: value of a last digit
 */
int print_last_digit(int l)

{
int lastd;

lastd = l % 10;
if (lastd < 0)
{
lastd = lastd * -1;
}
_putchar (lastd + '0');
return (lastd);
}
