#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byts(s)\n", sizeof(char));
	printf("Size of a int: %zu byts(s)\n", sizeof(int));
	printf("Size of a long int: %zu byts(s)\n", sizeof(long int));
	printf("Size of a long long: %zu byts(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byts(s)\n", sizeof(float));
	return (0);
}
