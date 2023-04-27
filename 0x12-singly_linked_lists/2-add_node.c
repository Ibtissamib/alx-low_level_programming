#include "lists.h"
/**
 * add_node- adds a new node at the beginning of a list_t list.
 * @head: double pointer to list_t
 * @str: pointer to const char
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	int nbr = 0;
	list_t *new_head = malloc(sizeof(list_t));

	if (head == NULL || new_head == NULL)
		return (NULL);
	while (str[nbr])
		nbr++;
	if (str != NULL)
	{
		new_head->str = strdup(str);
		if (new_head->str == NULL)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = nbr;

	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
