#include "main.h"
/**
 * Print alphabet using _putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar (alphabet);
	}
		_putchar ('\n');
}
