#include "lists.h"
/**
 * print_listint - a function that prints all
 *             the elements of a list.
 * @h: pointer start a list
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
size_t i;
for (i = 0; h != NULL;)
{
printf("%i\n", h->n);
h = h->next;
 i++;
}
return (i);
}
