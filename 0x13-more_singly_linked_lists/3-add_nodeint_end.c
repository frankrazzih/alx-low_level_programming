#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - adds a node at the end of the list
 * @head: pointer to the first node
 * @n: integer
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *cur = *head;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (cur == NULL)
	{
		*head = new;
	}
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = new;
	}
	return (new);
}

