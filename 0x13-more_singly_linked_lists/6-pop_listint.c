#include "lists.h"
/**
 * pop_listint- deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: double pointer to listint_t
 *
 * Return: Integer
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int nbr;

	if (*head == NULL)
		return (0);
	node = (*head)->next;
	nbr = (*head)->n;
	free(*head);
	*head = node;
	return (nbr);
}
