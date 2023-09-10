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
	for (b = a + a; b <= '9'; b++)
	{
	if (b != a)
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
	putchar('\n');
	return (0);
}
