#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of
 * listint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of the node, starting at 0
 *
 * Return: pointer to the node we want,
 * otherwise NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);
}
