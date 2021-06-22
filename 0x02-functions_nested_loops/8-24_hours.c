#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 */
void jack_bauer(void)
{
int hour, min, a, b, c, d;
for (hour = 0; hour <= 23; hour++)
{
for (min = 0; min <= 59; min++)
{
a = hour / 10;
b = hour % 10;
c = min / 10;
d = min % 10;
_putchar('a');
_putchar('b');
_putchar(':')
_putchar('c');
_putchar('d');
_putchar('\n');
}
}
}
