#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a list
 * @head: pointer to the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
	}
	head = NULL;
}
