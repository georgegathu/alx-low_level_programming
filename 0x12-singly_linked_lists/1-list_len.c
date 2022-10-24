#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @x: pointer to the list_t list
 *
 * Return: number of elements in x
 */
size_t list_len(const list_t *x)
{
	size_t y = 0;

	while (x)
	{
		y++;
		x = x->next;
	}
	return (y);
}
