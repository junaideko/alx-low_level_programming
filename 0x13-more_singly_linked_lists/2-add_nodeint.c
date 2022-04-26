#include "lists.h"

/**
 * add_nodeint - program adds a new node at the beginning of a listint_t list.
 * @head: is a pointer to a list
 * @n: is an integer
 * Return: is a pointe to the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
