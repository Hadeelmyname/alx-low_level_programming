#include "main.h"

/**
 * _isalpha - Checkes for upper or lower character
 * @c: is the character to be checked
 * Return: 1 if its an upper or lower character or 0 for anyhing else
 *
 */

int _isalpha(int c)
{

if ((c >= 99 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
