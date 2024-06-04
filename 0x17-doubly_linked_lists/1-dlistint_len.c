#include "lists.h"
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
