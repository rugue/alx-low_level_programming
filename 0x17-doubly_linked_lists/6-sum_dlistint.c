#include "lists.h"

/**
 * sum_dlistint - this sums all the data of dlistint_t linkedlist
 * @head: the pointer to the beginning of the linkedlist
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
