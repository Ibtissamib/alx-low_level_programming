#include "lists.h"
/**
 * free_dlistint- frees a dlistint_t list.
 * @head: dlistint_t *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
