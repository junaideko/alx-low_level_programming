#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;

	listint_t *insert_node, *temp;

	if (head == NULL)
		return (NULL);

	insert_node = malloc(sizeof(listint_t));

	if (insert_node == NULL)
		return (NULL);

	insert_node->n = n;

	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (insert_node);
	}
	temp = *head;
	while (temp != NULL && counter < (idx - 1))
	{
		temp = temp->next;
		counter++;
		if (temp == NULL)
		{
			free(insert_node);
			return (NULL);
		}
	}
	insert_node->next = temp->next;
	temp->next = insert_node;
	return (insert_node);
}
