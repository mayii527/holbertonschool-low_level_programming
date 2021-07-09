#include "holberton.h"
/**
 * _sqrt_recursion - function that returns the natural
 *                   square root of a number.
 *@n: number
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
 {
if (n == 0)
return (0);
return (_check(1, n));
}
/**
 * sqrt_check - checks for the square root of c
 * @a:guess at sqrt
 * @b: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */
int sqrt_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_check(a + 1, b));
}
