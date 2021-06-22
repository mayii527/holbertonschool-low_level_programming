#include "holberton.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: integer of the function.
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
return (last_digit);
}
