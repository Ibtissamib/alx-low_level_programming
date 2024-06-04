#include "lists.h"
/**
  * get_dnodeint_at_index- returns the nth node of a dlistint_t linked list.
  * @head: dlistint_t *
  * @index: int
  * Return: list
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
/**
 * dlistint_len- returns the number of elements in a linked dlistint_t list.
 * @h: pointer to const dlistint_t
 *
 * Return: NBR OF ELEMENTS
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		nbr++;
		h = h->next;
	}
	return (nbr);
}
/**
  * delete_dnodeint_at_index- deletes the node at index index of list
  * @head: dlistint_t **
  * @index: unsigned int
  * Return: int
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL, *next = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	i = dlistint_len(*head);
	if (index == 0)
	{
		*head = NULL;
		return (1);
	}
	else if (index < i)
	{
		prev = get_dnodeint_at_index(*head, index - 1);
		next = get_dnodeint_at_index(*head, index + 1);
		prev->next = next;
		next->prev = prev;
		return (1);
	}
	else if (index == i)
	{
		prev = get_dnodeint_at_index(*head, index - 1);
		prev->next = NULL;
		return (1);
	}

	else
		return (-1);

}
