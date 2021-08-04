#include "lists.h"
/**
 * list_len - that returns the number of elements in a linked.
 * @h: structure
 * Return: number  of the elements
 */
size_t list_len(const list_t *h)
{
int i;
char *a;
const list_t *b = NULL;

b = h;
for (i = 0; b; i++)
{
a = b->str;
if (a == NULL)
{
a = "(nil)";
}
b = b->next;
}
return (i);
}
