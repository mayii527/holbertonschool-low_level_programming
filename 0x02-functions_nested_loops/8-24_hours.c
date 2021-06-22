#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int a, b, c, d;
for (int hour = 0; hour <= 23; hour++)
{
for (int min = 0; min <= 59; min++)
{
a = hour / 10;
b = hour % 10;
c = min / 10;
d = min % 10;
_putchar(" %d%d:%d%d \n", a, b, c, d);
}
}
return (0);
}
