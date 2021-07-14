#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Copies a string and returns a pointer to the array.
 * @str: String to be copied.
 *
 * Return: Pointer to the array or NULL.
 */
char *_strdup(char *str)
{
int a = 0;
int b = 0;
char *dest;
if (str == NULL)
return (NULL);
while (*(str + a))
a++;
a++;
dest = malloc(sizeof(char) * a);
if (dest == NULL)
return (NULL);
for (; b < a; b++)
*(dest + b) = *(str + b);
return (dest);
}
