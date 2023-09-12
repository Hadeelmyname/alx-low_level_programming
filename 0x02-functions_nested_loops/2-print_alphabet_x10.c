#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet_x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int num = 1;

	while (num <= 10)
	{
	num++;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar (alpha);
	}
	_putchar ('\n');
	}
}
