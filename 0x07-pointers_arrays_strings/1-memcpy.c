#include "holberton.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: Pointer to the memory area
 * @src: Pointer to the source
 * @n: Number of bytes
 *
 * Return: Pointer to the string modified.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}

	return (dest);
}
