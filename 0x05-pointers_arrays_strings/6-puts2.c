#include "holberton.h"
/**
 * puts2 - value of two integers
 * @str: Set of characters
 *
 * Return: Nothing
*/
void puts2(char *str)
{
int n = 0;
while (*(str + n) != '\0')
{
if (n % 2 == 0)
_putchar(*(str + n));
n++;
}
_putchar('\n');
}
