#include "monty.h"
/**
 * f_push - pushes element to a stack
 * @head: pointer to head node
 * @line_number: line number
 *
 * Return: void
 */

void f_push(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	stack_t *node;

	line_number = 0;
	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
		return;
	temp = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
		return;
	if (!isdigit(node->n) || node == NULL)
	{
		write(2, "L<line_number>: usage: push integer", 33);
		 exit(EXIT_FAILURE);
	}
	if (*head == NULL)
	{
		(*head)->next = node->next;
		node = *head;
		temp = node;
		node->next = NULL;
		line_number += 1;
	}
	if (temp->next == NULL)
	{
		node->next = temp->next;
		node->prev = temp;
		temp->next = node;
		node->next = NULL;
		line_number += 1;
	}
}
