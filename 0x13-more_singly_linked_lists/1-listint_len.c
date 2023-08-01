#include "lists.h"
/**
 * listint_len- returns the no. of elements in a linked list
 * @h: pointer to the first node
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
