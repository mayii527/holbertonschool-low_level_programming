#include "holberton.h"
/**
 * string_toupper - Write a function that changes all lowercase
 *                  letters of a string to uppercase.
 * @a: String
 *
 * Return: String as a pointer
 */
char *string_toupper(char *a)
{
int b = 0;
while (*(a + b))
{
if (*(a + b) >= 'a' && *a <= 'z')
*(a + b) -= 32;
b++;
}
return (a);
}
