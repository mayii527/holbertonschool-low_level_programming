#include "holberton.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: integer of the function.
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
int num_positive;
if (n <= -1)
{
num_positive = n * -1;
}
last_digit = num_positive % 10;
_putchar(last_digit + '0');
_putchar('\n');
return (0);
}
