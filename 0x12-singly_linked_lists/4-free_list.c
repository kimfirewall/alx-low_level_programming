#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		/*Store the next node before freeing the current one*/
		free(head->str);/*Free the string of the current node*/
		free(head);/*Free the current node*/
		head = temp;/*Move to the next node*/
	}
}
