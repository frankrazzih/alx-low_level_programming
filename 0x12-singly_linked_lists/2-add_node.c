#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of the list
 * @head : pointer to the first node
 * @str : the string to duplicate and assign to the newnode
 *Return: newnode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	newnode->len = strlen(str);
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
	return (newnode);
	}
}
