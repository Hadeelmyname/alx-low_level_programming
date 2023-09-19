#include "main.h"
/**
 * *_strcpy - function name
 * @dest: first parameter
 * @src: second parameter
 * Return: 0 Always success
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
