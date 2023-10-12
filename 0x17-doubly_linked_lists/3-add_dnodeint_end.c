#include "lists.h"
/**
 * add_dnodeint_end - add node at end of list
 * @head: pointer to 1st node
 * @n: int value
 * Return: newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur = *head;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		newnode->prev = NULL;
		newnode->n = n;
	}
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newnode;
		newnode->prev = cur;
		newnode->next = NULL;
		newnode->n = n;
	}
	return (newnode);
}
