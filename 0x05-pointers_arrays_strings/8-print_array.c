#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print n elements from an integer array
 * @a: Pointer to the integer array
 * @n: Number of elements to extract
 *
 * Return: Nothing
*/
void print_array(int *a, int n)
{
int b;
for (b = 0; b < n; b++)
{
if (b == 0)
printf("%d", *(a + b));
else
printf(", %d", *(a + b));
}
printf("\n");
}
