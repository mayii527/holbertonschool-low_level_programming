#include "holberton.h"
/**
 * print_diagonal - Print diagonal lines.
 * @n: Number of lines
 *
 * Return: There is no return value
 */
void print_diagonal(int n)
{
int a;
int b;
if (n > 0)
{
for (a = 0; a < n; i++)
{
if (a == 0)
{
_putchar('\\');
_putchar('\n');
}
else
{
for (b = 0; b < a; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
else
_putchar('\n');
}
