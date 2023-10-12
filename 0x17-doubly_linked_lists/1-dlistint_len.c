#include "lists.h"
/**
 * dlistint_len - pointer to 1st node
 * @h: pointer to 1st node
 * Return: no. of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t *cur = h;

	while (cur != NULL)
	{
		counter++;
		cur = cur->next;
	}
	return (counter);
}
