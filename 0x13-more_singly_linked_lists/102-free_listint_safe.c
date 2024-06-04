# include "lists.h"
# include <stddef.h>
/**
  * free_listint_safe- frees a listint_t list.
  * @h: listint_t **
  * Return: size_t
  */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
		count++;
	}
	*h = NULL;
	return (count);
}
