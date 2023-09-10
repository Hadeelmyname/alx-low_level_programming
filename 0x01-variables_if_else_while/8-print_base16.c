#include <stdio.h>
/**
 * main - Print number in based 16
 *
 * Return: 0 Always (Success)
 *
 */
int main(void)
{
	int s;
	char o;

	for (s = 0; s <= 9; s++)
	putchar(s);
	for (o = 'a'; o <= 'f'; o++)
	putchar(o);
	putchar('\n');
	return (0);
}
