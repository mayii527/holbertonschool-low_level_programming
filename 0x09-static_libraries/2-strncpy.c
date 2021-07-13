#include "holberton.h"
/**
 * _strncpy - Write a function that copies a string.
 * @dest: The copy of the src
 * @src: The string to be copied
 * @n: Number of bytes to be append from src
 *
 * Return: dest (as a pointer).
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
while (*(src + a) != '\0' && a < n)
{
*(dest + a) = *(src + a);
a++;
}
while (a < n)
{
*(dest + a) = '\0';
a++;
}
return (dest);
}
