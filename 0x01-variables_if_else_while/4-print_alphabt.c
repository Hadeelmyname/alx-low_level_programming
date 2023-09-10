#include <stdio.h>

/**
 * main - Print alphabet lower case except e & q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case, e,q;
	e = 'e';
	q = 'q';

	for (lower_case = 'a'; lower_case <= 'z'; lowe_case++)
	{
	if (lower_case != e && lpwer_case != q)
	 putchar(lower_case);
	}	
	putchar('\n');
        return (0);
}
