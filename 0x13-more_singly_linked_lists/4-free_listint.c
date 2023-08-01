#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a linked list
 * @head: pointer to the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *cur;

	while (head != NULL)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
