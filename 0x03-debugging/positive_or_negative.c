#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * positive_or_negative - Positive, negative, or zero.
 *
 * Return: no return
*/
void positive_or_negative(void)
{
int i = 0;
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
