#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * check - check numbers
 * @f: caracther check
 * Return: 1, else 0
 */
int check(char *f)
{
int l;
int m;
int n = 0;
l = strlen(f);
for (m = 0; m < l; m++)
{
if (f[m] < '0' || f[m] > '9')
{
return (-1);
}
else
{
n = n * 10 + (f[m] - '0');
}
}
return (n);
}
/**
 * main - Write a program that adds positive numbers.
 * @argc: argumento
 * @argv: array
 * Return: result of sum or 0.
 */
int main(int argc, char *argv[])
{
int a;
int num;
int sum;
sum = 0;
for (a = 1; a < argc; a++)
{
num = check(argv[a]);
if (num == -1)
{
printf("Error\n");
return (1);
}
sum = sum + num;
}
printf("%d\n", sum);
return (0);
}
