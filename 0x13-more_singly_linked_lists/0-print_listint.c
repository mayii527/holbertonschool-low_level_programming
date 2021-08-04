#include "lists.h"
/**
 * print_list- a function that prints all
 *             the elements of a list.
 * @h: pointer start a list
 * Return: number
 */
size_t print_listint(const listint_t *h);
{
        size_t i;
        for (i = 0; h != NULL; i++)
        {
                printf("%i\n", h->len);
                h = h->next;
        }
}
return (i);
}