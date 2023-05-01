#include "lists.h"

/**
 * pop_listint - deleting the head of a node and returning node's data
 * @head: head of linked list
 * Return: node data in integer
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
