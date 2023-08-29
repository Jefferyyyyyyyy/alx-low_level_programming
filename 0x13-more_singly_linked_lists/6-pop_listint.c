#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data (n) of the head node
 * otherwise 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
