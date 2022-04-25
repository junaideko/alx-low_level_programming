#include "lists.h"

/**
 * listint_len - function return the size of a linked list
 * @h: is a pointer to a linked list
 * Return: is the size of a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while(h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
