#include "main.h"

/**
 * _sqrt_check - helper function for _sqrt_recursion
 * @n: input number to find square root of
 * @i: current integer to check
 *
 * Return: square root of n if found, -1 if not
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number to find square root of
 *
 * Return: square root of n if found, -1 if not
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
