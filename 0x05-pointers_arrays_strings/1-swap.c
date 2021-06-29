#include "holberton.h"
/**
 * swap_int - exchange
 * @a: Integer a
 * @b: Integer b
 *
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
