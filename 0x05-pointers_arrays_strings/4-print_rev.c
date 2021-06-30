#include "holberton.h"
/**
 * _strlen - Swap the value of two integers
 * @s: Set of characters
 *
 * Return: Nothing
*/
int _strlen(char *s)
{
int n = 0;
while (*(s + n) != '\0')
{
n++;
}
return (n);
}
/**
 * print_rev - a string in reverse
 * @s: Set of characters
 *
 * Return: Nothing
*/
void print_rev(char *s)
{
int len;
int n;
len = _strlen(s);
n = len;
while (n > 0)
{
n--;
_putchar(*(s + n));
}
_putchar('\n');
}
