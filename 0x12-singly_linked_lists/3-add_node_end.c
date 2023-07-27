#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to the first node
 * @str: the string to duplicate and assign to the newnode
 * Return: newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *cur;

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		/* If the linked list is empty, make the new node the head */
		*head = newnode;
	}
	else
	{
		/* Traverse the list to find the last node */
		cur = *head;
		while (cur->next != NULL)
			cur = cur->next;

		/* Attach the new node to the end of the list */
		cur->next = newnode;
	}

	return (newnode);
}

