#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning
 * @head: pointer to 1st node
 * @n: integer value
 * Return: newnode
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL || head == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	newnode->prev = NULL;
	free(newnode);
	return (newnode);
}
