#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to the first node
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *cur;

	while (head != NULL)
	{
		cur = head;
		head = head->next;
		free(cur->str);
		free(cur);
	}
}

