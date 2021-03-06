#include "lists.h"

/**
 * print_listint - function prints elements in a linkedlist
 * @h: is a pointer to a linkedlist
 * Return: number of element in the list of type size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
