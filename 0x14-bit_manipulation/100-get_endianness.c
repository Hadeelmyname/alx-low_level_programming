#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int i;
	char *o;

	i = 1;
	o = (char *)&i;
	return (*o);
}
