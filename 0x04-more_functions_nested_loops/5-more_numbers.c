#include "holberton.h"
/**
 *  more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
count = 0;
while(count <= 9)
{
for (int n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar('0' + (n / 10));
}
else
_putchar('0' + n);
}
_putchar('\n');
count++;
}
}
