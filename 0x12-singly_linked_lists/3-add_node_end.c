#include "lists.h"
#include <string.h>
/**
 * add_node_end - that returns the number of elements in a linked.
 * @head: structure
 * @str: algo
 * Return: number  of the elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *end;
    list_t *actual;
    char *dup;

    if (str == NULL)
    {
        return (NULL);
    }
    dup = strdup(str);
    if (dup == NULL)
    {
        return (NULL);
    }
    end = malloc(sizeof(list_t));
    if (end == NULL)
    {
        return (NULL);
    }
    end->str = dup;
    end->len = strlen(str);
    end->next = NULL;
    if (*head == NULL)
    {
        *head == end;
        return (*head);
    }
    actual = *head while (actual->next != NULL)
    {
        actual = actual->next;
    }
    actual->next = end;
    return (*head);
}