#include "lists.h"

/**
 * free_listint - freeing a listint_t list
 * @head: head of a linked list
 * Return: NULL
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
