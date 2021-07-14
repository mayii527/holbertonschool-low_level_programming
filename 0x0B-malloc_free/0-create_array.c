#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - that creates an array of chars, 
 *                 and initializes it with a specific char.
 * @size: size of array
 * @c: remplacing
 * Return: pointer or NULL.
 */
char *create_array(unsigned int size, char c)
{
        unsigned int a;
        char *b;

        if (size <= 0)
        {
                return (NULL);
        }
        b = (sizeof(char) * size);
        if (b == NULL)
        {
                return (NULL);
        }
        for (a = 0; a < size; a++)
        {
                return (b)
        }
}