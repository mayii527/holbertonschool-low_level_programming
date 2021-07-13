#include "holberton.h"
/**
 * _puts - Print a string
 * @str: Set of characters
 *
 * Return: Nothing
*/
void _puts(char *str)
{
int n = 0;
while (*(str + n) != '\0')
{
_putchar(*(str + n));
n++;
}
_putchar('\n');
}
