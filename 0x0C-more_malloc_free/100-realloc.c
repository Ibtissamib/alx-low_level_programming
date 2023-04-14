#include "main.h"
#include <stdlib.h>
/**
 * _realloc- reallocates a memory block using malloc and free
 * @ptr :pointer to allocated memory
 * @old_size: unsigned int
 * @new_size: unsigned int
 *
 * Return: pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size != old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		while (i < old_size && i < new_size)
		{
			*((char *)p + i) = *((char *)ptr + i);
			i++;
		}
		free(ptr);
	}
	return (p);
}
