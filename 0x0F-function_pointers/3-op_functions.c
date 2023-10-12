#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two number
 * @a: the firs number
 * @b: the second number
 * Return: sum of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Return the diffrence of two numbers
 * @a: first number
 * @b: second number
 * Return: diffrence of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of a and b
 * @a: first number
 * @b: second number
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return modulation of a and b
 * @a: first number
 * @b: second number
 * Return: the module of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
