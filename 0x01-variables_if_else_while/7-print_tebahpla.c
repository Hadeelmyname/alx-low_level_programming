#include <stdio.h>
/**
 * main - Print alphabet in revesre 
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	putchar(b);
	putchar('\n');
	return (0);
}
