#include "lists.h"
/**
 * list_len- returns the number of elements in a linked list_t list.
 * @h: pointer to const list_t
 *
 * Return:  number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		nbr++;
		h = h->next;
	}
	return (nbr);
}
