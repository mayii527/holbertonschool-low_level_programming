#include "holberton.h"
/**
 * print_numbers - Write a function that prints the numbers,
 *
 * Return: Always 0
 */
void print_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n++)
_putchar(n);
_putchar('\n');
}