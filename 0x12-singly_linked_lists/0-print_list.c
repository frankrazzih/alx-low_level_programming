#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all members of the linked list
 * @h : pointer to the first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
	if (current->str == NULL)
	{
		printf("[0] (nil)");
	}
	printf("[%d] %s\n", current->len, current->str);
	current = current->next;
	count++;
	}
	return (count);
}
