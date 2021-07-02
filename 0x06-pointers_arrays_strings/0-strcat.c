#include "holberton.h"
/**
 * _strcat - Concatenate a string to another string
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Destination string as a pointer
 */
char *_strcat(char *dest, char *src)
{
int n = 0;
while (*(dest + n))
n++;
while (*(src))
{
*(dest + n) = *(src);
n++;
src++;
}
return (dest);
}
