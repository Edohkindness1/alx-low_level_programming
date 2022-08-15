#include "lists.h"

/**
 * listint_len - prints the number of nodes.
 * @h: value of list
 *
 * Return: any data type list
 */
size_t listint_len(const listint_t *h)
{
	cont listint_t *temp = h;
	int node = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		node++;
	}

	return (node);
}
