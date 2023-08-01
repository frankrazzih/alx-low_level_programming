#include "lists.h"
#include <stdio.h>
/**
 * print_lintint - prints the elements of the current node
 * @h: pointer to the current node
 * Return: the no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
