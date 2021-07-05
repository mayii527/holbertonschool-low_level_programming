#include "holberton.h"
/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Pointer to the memory area
 * @b: Value to replace
 * @n: Number of bytes
 *
 * Return: Pointer to the string modified.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int ;
for (a = 0; a < n; a++)
{
*(s + a) = b;
if (*(s + a) == '\0')
break;
}
return (s);
}
