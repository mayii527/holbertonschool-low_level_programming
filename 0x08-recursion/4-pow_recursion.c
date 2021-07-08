#include "holberton.h"
/**
 * _pow_recursion -  function that returns the value of
 *                   x raised to the power of y.
 *@x:number
 *@y:power
 *
 * Return: return the value of x.
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y < 0)
return (-1);
return (_pow_recursion(x, y - 1) * x);
}
