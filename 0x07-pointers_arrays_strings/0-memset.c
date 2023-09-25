#include "main.h"
/**
 * _memset - function fills the memory area with specified value
 * @s: strarting address of the memory to be filled
 * @b: the desired value
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
