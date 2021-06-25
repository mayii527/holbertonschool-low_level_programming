#include "holberton.h"
/**
 * print_line - Print _.
 * @n: Number of lines
 *
 * Return: No return value
 */
void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
_putchar('_');
}
}
_putchar('\n');
}
