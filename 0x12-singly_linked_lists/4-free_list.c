#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees linked list
 * @head : pointer to the first node
 *Return: void
 */
void free_list(list_t *head)
{
    list_t *cur = head;
    while (cur->next != NULL)
    {
        free(cur);
    }
}
