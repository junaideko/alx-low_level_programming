#include "lists.h"
/**
 * print_dlistint - function prints all the elements of a dlistint_t list.
 * @h: is a pointer to the head of a dlistint_t list
 * Return: the number of nodes size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
