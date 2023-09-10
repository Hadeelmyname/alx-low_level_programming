#include <stdio.h>
/**
 * main - Print single digits based 10 from 0
 *
 * Return: Always 0 (uccess)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	putchar(a + 48);
	}
	putchar('\n');
	return (0);
}
