#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free memory for a list
 * @head: ponter to first node in list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
