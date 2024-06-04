#include "lists.h"
/**
  * get_dnodeint_at_index- returns the nth node of a dlistint_t linked list.
  * @head: dlistint_t *
  * @index: int
  * Return: index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
