#include "lists.h"
/**
 * listint_len - returning the number of the elements in a linked list
 * @h: head of the linked list
 * Return: numbers of elements in linked_list
 */

size_t listint_len(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}

