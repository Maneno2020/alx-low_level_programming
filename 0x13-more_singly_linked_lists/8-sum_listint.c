#include "lists.h"

/**
 * sum_listint - returning the sum of all data (n) of a listint_t linked list
 * @head: head of the linked list
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node;

	sum = 0;
	if (head == NULL)
		return (sum);
	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
