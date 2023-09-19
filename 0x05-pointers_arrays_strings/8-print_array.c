#include "main.h"
/**
 * print_array - function name
 * @a: first paramert
 * @n: second parameter
 * Return: 0 Always success
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
{
if (i < n - 1)
printf(", ");
}
}
printf("\n");
}

