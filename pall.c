#include "monty.h"
/**
 * _pall -  prints all the values on the stack
 * @stack: stack
 * Return: no return
 */
void _pall(stack_t **stack)
{
	if (stack)
	{
		while (stack)
		{
			printf("%d", stack->n);
			stack = stack->next;
		}
	}
	else
		return;

}
