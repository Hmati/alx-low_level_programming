#include "lists.h"

/**
 * listint_len - lenght of a list
 * @h: head of a list
 *
 * Return: Return len of a list
 */


size_t listint_len(const listint_t *h)
{
	size_t len_list = 0;

	while (h != NULL)
	{
		h = h->next;
		len_list++;
	}
	return (len_list);
}
