#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * _strlen - to find string lenght
 * @s: string to find it lenght
 * Return: lenght
 */
unsigned int _strlen(char *s)
{
	unsigned int y;

	for (y = 0; s[y]; y++)
		;
	return (y);
}
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: double pointer to linked list
 * @str: string to add to new node
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
			new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
