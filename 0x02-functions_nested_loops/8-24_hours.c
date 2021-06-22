#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 */
void jack_bauer(void)
{
int hour, min;  
char a, b, c, d;
for (hour = 0; hour <= 23; hour++)
{
for (min = 0; min <= 59; min++)
{
a = hour / 10;
b = hour % 10;
c = min / 10;
d = min % 10;
_putchar("%s%s:%s%s", a, b, c, d);
_putchar('\n');
}
}
}
