#include "lists.h"

/**
 * dlistint_len - this count the numb of nodes in linkedlist
 * @h: this points to the beginning of a linked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
