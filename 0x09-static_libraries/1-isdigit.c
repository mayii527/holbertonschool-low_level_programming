#include "holberton.h"
/**
 * _isdigit -  Check for a digit
 * @c: digit
 *
 * Return: 1- digit  0- Not digit.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
