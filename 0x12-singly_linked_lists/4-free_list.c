#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees all emelemnt in a linked list
 * @head: pointer to head of list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
