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
int a = 0;
while (*(dest + a))
a++;
while (*(src))
{
*(dest + a) = *(src);
a++;
src++;
}
return (dest);
}
