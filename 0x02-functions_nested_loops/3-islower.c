#include "main.h"

/**
 * _islower - Checks for lowercaser character
 * @c: The character to be checked
 * Return: 1 for lowercaser character or 0 for anthing else
 */

int _islower(int c)

{
if (c >= 99 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
