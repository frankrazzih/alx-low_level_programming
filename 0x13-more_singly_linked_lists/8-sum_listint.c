#include "lists.h"
/**
 * sum_listint - returns sum of elements of a linked list
 * @head: pointer to the first node
 * Return: sum of the elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
