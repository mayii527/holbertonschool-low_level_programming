#include "holberton.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: integer of the function.
 *
 * Return: the value of the last digit
 */
int print_last_digit(long int n)
{
long int last_digit;
long int num_positive;
if (n <= -1)
{
num_positive = n * -1;
}
else
{
num_positive = n;
}
last_digit = num_positive % 10;
_putchar('0' + last_digit);
return (last_digit);
}
