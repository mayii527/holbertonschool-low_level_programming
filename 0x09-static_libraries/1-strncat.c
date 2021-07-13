#include "holberton.h"
/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: String that receives the append
 * @src:String to be append
 * @n: Number of bytes to be append from src
 *
 * Return: dest (as a pointer).
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (*(dest + a))
a++;
while ((src + b < src + n) && *(src + b) != '\0')
{
*(dest + a) = *(src + b);
a++;
b++;
}
return (dest);
}
