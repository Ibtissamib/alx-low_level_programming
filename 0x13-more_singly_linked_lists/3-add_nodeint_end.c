#include "lists.h"
/**
 * add_nodeint_end- adds a new node at the end of a listint_t list.
 * @head: double pointer to listint_t
 * @n: const int
 *
 * Return: pointer to listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end = malloc(sizeof(listint_t));
	listint_t *node;

	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	if (*head == NULL)
		*head = new_end;
	else
	{
		node = *head;
		while (node->next)
		node = node->next;
		node->next = new_end;
	}
	return (new_end);
}
