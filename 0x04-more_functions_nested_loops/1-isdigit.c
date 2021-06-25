#include "holberton.h"
/**
 * _isgigit -  Check for a digit
 * @c: digito
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
