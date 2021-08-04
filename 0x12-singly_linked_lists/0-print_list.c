#include "lists.h"
/**
 * print_list- a function that prints all
 *             the elements of a list.
 * @h: pointer start a list
 * Return: number
 */
size_t print_list(const list_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
{
if (h->str == NULL)
{
printf("[0] (nil)");
}
else
{
printf("[%i] %s", h->len, h->str);
}
h = h->next;
}
return (i);
}
