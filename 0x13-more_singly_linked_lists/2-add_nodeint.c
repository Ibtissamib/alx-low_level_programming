#include "lists.h"
/**
 * add_nodeint- adds a new node at the beginning of a listint_t list.
 * @head: double pointer to listint_t
 * @n: const integer
 *
 * Return: pointer to listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
