#include "lists.h"
/**
 * add_dnodeint_end- adds a new node at the end of a dlistint_t list.
 * @head: dlistint_t **
 * @n: const n
 * Return: dlistint_t *
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t)), *temp = *head;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (temp)
	{
		if (temp->next == NULL)
		{
			temp->next = newnode;
			newnode->prev = temp;
			break;
		}
		temp = temp->next;

	}
	return (newnode);
}
