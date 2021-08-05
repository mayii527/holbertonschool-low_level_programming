#include "lists.h"
/**
 * add_node - that returns the number of elements in a linked.
 * : structure
 * Return: number  of the elements
 */
list_t *add_node(list_t **head, const char *str)
{
        list_t *new;
        int i = 0;
        new = malloc(sizeof(list_t));
        if (new == NULL)
        {
                return (NULL);
        }
        while (str[i] != '\0')
        {
                i++;
        }
        new->str = strdup(str);
        new->len = len;
        new->next = head;
        (*head) = new;
        return (new);
}