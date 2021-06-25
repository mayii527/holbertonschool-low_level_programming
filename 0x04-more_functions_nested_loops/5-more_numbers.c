#include "holberton.h"
/**
 *  more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
for (int i = 0; i <= 9; i++)
{
for (int j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar('0' + (j / 10));
}
else
_putchar('0' + j);
}
_putchar('\n');
}
}
