#include "lists.h"

/**
 * free_listint - function frees a linked list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
