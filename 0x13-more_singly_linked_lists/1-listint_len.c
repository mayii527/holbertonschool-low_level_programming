#include "lists.h"
/**
 * listint_len - that returns the number of elements in a linked.
 * @h: structure
 * Return: number  of the elements
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
for (; h != NULL; i++)
{
h = h->next;
}
return (i);
}
