#include "lists.h"
/**
 * free_list -  a function that frees a list.
 * @head: start of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
    if (head == NULL)
    {
        return;
    }
    free_list(head->next);
    free(head->str);
    free(head);
}