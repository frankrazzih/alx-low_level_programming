#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add a new node at the beginning of the list
 * @head: pointer to the first node
 * @n: integer
 * Return: the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	if (new == NULL)
	{
		return (NULL);
	}
	/*add a new node*/
	if (head != NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		new->next = NULL;
		return (new);
	}
}
