#include "monty.h"

/**
 * s_pall - print stack elements
 * @head: pointer to start of stack list
 * @counter: not used here
 *
 * Return: void
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
