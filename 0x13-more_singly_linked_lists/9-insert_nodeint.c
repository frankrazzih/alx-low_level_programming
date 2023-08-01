#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	unsigned int x1 = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *cur;

	while (*head != NULL)
        {
                x1++;
                *head = (*head)->next;
        }
	if (new == NULL || idx > x1)
	{
		return (NULL);
	}
	while (x < idx)
	{
		*head = (*head)->next;
		x++;
	}
	/*while (*head != NULL)
	{
		x1++;
		*head = (*head)->next;
	}*/
	cur = (*head)->next;
	(*head)->next = new;
	new->next = cur;
	new->n = n;
	return (new);
}
