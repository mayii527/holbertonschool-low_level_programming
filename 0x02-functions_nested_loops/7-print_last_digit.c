#include <limits.h>
#include "holberton.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @r: integer of the function.
 *
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{
int last_digit;
int num_positive;
if (r <= -1)
{
num_positive = r * -1;
}
else
{
num_positive = r;
}
last_digit = num_positive % 10;
_putchar('0' + r);
_putchar('\n');
return (0);
}
