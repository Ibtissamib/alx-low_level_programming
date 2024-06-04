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
  * insert_dnodeint_at_index- inserts a new node at a given position.
  * @h: dlistint_t **
  * @idx: unsigned int
  * @n: int
  * Return: dlistint_t *
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL, *next = NULL, *prev = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	i = dlistint_len(*h);
	if (idx > i)
		return (NULL);
	else if (idx == 0)
		newnode = add_dnodeint(h, n);
	else if (idx < i)
	{
		next = get_dnodeint_at_index(*h, idx);
		prev = get_dnodeint_at_index(*h, idx - 1);
		newnode->n = n;
		newnode->prev = next->prev;
		newnode->next = next;
		prev->next = newnode;
		next->prev = newnode;
	}
	else if (idx == i)
		newnode = add_dnodeint_end(h, n);
	return (newnode);
}
