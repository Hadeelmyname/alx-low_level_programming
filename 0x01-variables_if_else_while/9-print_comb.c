#include <stdio.h>
/**
 * main - Print all possible combination of a digit
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int v;

	for (v = '0'; v <= '9'; v++)
	{
	putchar(v);
	if (v != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
