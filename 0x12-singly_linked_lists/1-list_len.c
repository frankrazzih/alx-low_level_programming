#include <stdio.h>
#include "lists.h"
/**
 * list_len - counts the number of elements in a linked list
 * @h : pointer to the first node
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
	if (current->str != NULL)
	{
		count++;
	}
	current = current->next;
	}
	return (count);
}
