#include <stdio.h>
/**
 * main -Print all possible combination of 2 digits
 *
 * Return:0 Always (Success)
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
	for (b = '0'; b <= '9'; b++)
	{
	if (p != d)
	{
	putchar(a);
	putchar(b);
	if (a == '8' && b == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}
