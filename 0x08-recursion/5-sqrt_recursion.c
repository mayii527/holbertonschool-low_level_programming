#include "holberton.h"
/**
 * _check - checks for the square root of b
 * @a:square root
 * @b: number
 *
 * Return: -1 or sqrt of b
 */
int _check(int a, int b)
{
if (a * a == b)
{
return (a);
}
if (a * a > b)
{
return (-1);
}
return (_check(a + 1, b));
}
/**
 * _sqrt_recursion - that returns the natural square root of a number.
 * @n: root
 * Return: natural root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (_check(1, n));
}
