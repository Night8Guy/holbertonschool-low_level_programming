#include "lists.h"

/**
 * list_len - Finds the length of a linked list
 * @h: Pointer, pointing to the head of the linked list
 * Return: The amount of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
