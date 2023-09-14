#include "main.h"
/**
 * main - Entry point
 * Descreption: 'the program will check a number is it positive or negative'
 * @i: the number to be tested
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
