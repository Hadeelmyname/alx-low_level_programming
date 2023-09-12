#include "main.h"

/**
 * _islower - to check for lower caser character
 * @c is the parameter to be checked 
 * Retur: 1 if c is lowercaser or retuen 0 for else
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
