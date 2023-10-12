#include "lists.h"
/**
 * print_dlistint - pointer to 1st node
 * @h: pointer to 1st node
 * Return: no. of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t *cur = h;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		counter++;
		cur = cur->next;
	}
	return (counter);
}
