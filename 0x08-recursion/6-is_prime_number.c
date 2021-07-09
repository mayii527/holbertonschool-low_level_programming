#include "holberton.h"
/**
 * n_prime - check number if this is prime
 * @a: checkout factor prime
 * @b: number factorial
 * Return: prime_check with factorial number.
*/
int n_prime(int a, int b)
{
if (b < 2 || b % a == 0)
{
return (0);
}
else if (b < a / 2)
{
return (1);
}
return (n_prime(a + 1, b));
}
/**
 * is_prime_number - function that returns 1 if the input.
 * @n: this value pointer
 * Return: function prime_check
*/
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (n_prime(2, n));
}
