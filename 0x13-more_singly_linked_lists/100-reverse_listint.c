#include <string.h>
#include "lists.h"
/**
 * reverse_listint- reverses a listint_t linked list.
 * @head: double pointer to listint_t
 *
 * Return: liste listint_t reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *newnode = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = newnode;
		newnode = *head;
		*head = node;
	}
	*head = newnode;
	return (*head);
}

