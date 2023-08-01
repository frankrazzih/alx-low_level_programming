#include "lists.h"
/**
 * get_nodeint_at_index - return the node at the index
 * @head: pointer to the first node
 * @index: the position of the node to return
 * Return: the node at the index no in the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (x < index)
	{
		head = head->next;
		x++;
	}
	return (head);
}
