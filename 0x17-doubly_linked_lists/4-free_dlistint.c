#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - this free a dlistint_t list
 * @head: the pointer to beginning of the linkedlist
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
