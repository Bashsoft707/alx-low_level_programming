#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all elements in the lists
 * @h: pointer to listint structure
 * Return: number of node
 */

int print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
