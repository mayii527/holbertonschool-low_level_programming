#include "lists.h"
/**
 * list_len - that returns the number of elements in a linked.
 * @h: structure
 * 
 * Return: number  of the elements
 */

size_t list_len(const list_t *h)
{
    size_t i;
    for (i = 0; h != NULL; i++)
    {
        if (h->str == NULL)
        {
            h->str = "(nil)";
        }
        h = h->next;
    }
    return (i);
}