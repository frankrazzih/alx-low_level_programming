#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - frees the first node
 * @head: pointer to the first node
 * Return:the elements of the first node
 */
int pop_listint(listint_t **head)
{
	listint_t *cur;
	int x;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	cur = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free(cur);
	return (x);
}
