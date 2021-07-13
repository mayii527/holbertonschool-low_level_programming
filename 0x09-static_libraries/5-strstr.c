#include "holberton.h"
/**
 * _strstr - locates a substring.
 * @haystack: Pointer to the initial segment
 * @needle: Pointer to the acceptance segment
 *
 * Return: The pointer at matched position or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
int a = 0;
int b = 0;
while (*(haystack + a))
{
if (*(haystack + a) == *(needle + b))
{
b++;
if (*(needle + b) == '\0')
return ((haystack + a) - (b - 1));
}
else
b = 0;
a++;
}
if (*needle == '\0')
return (haystack);
return (0);
}
