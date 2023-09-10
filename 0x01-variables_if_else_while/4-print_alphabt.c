#include <stdio.h>

/**
 * main - Print alphabet lower case except e & q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase, e, q;
	e = 'e';
	q = 'q';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
	if (lowercase != e && lowercase != q)
	putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
