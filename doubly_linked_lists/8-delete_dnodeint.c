#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: pointer to head of list
 * @idx: index
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
dlistint_t *node, *cur = *head;
unsigned int i = 0;

node = malloc(sizeof(dlistint_t));
if (node == NULL || *head == NULL)
return (-1);
if (idx == 0)
{
*head = cur->next;
if (*head != NULL)
(*head)->prev = NULL;
free(cur);
return (1);
}
while (i < idx)
{
if (cur == NULL)
return (-1);
cur = cur->next;
i++;
}
cur->prev->next = cur->next;
if (cur->next != NULL)
cur->next->prev = cur->prev;
free(cur);
return (-1);
}
