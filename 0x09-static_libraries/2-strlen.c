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
