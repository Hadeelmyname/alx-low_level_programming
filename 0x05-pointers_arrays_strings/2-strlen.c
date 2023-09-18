#include "main.h"
/**
 * _strlen - function name
 * @s: parameter to be checked
 * Return: 0 Always success
 */

int _strlen(char *s)
{
	int leng;
	int count = 0;

for (leng = 0; s[leng] != '\0'; leng++)
	       count++;
	return (count);
}
