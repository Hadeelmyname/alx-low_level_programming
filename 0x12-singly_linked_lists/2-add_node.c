#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - function return lenght of string
 * @sr: character
 * Return: value
 */

int _strlen(const char *sr)
{
	int u = 0;

	while (sr[u] != '\0')
	{
		u++;
	}
	return (u);
}
/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list
 * @head: head of list_t
 * @str: value of element insert
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}
