/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 08:12:33 by vradis            #+#    #+#             */
/*   Updated: 2023/12/18 17:38:04 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Printf/ft_printf.h"

/*Function that calculates the stack length*/
int	stack_size(t_stack_node *stack)
{
	int len;

	len = 0;
	if (stack)
	{
		while(stack->next != NULL)
		{
			len++;
			stack = stack->next;

		}
		return (len);
	}
	return (0);
	printf("Error al calcular stack_size");
}

/*Add node at the end of the stack*/
void	*add_node_end(t_stack_node **stack, t_stack_node *newnode)
{
	t_stack_node *ptr;
	ptr = *stack;
	
	if (*stack == NULL)
		*stack = newnode;
	else
	{
		while(ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newnode;
	}
	return (newnode);
}

/*Add node at the beginning of the stack*/
/*void	*add_node_beginning(t_stack_node **stack, t_stack_node *newnode)
{
	newnode->next = *stack;
	*stack = newnode;
}*/

/*Function that prints stacks*/
void	printStack(const char *name, t_stack_node* stack) 
{
	ft_printf("Stack %s: ", name);
    while (stack != NULL) {
        ft_printf("%d -> ", stack->data);
        stack = stack->next;
    }
    ft_printf("NULL\n");
}

/*Functions to add argv to stacks*/
void	add_data(t_stack_node **stack, int data)
{
	t_stack_node	*newnode;
	newnode = malloc(sizeof(t_stack_node));
	newnode->data = data;
	newnode->next = *stack;
	*stack = newnode;
}


/*Function that checks if the numbers in the stack are organized
from smallest to largest
Return 1 = Organized
Return 0 = Not Organized*/

void	ft_stack_organized(t_stack_node *stack)
{
	t_stack_node	*ptr;

	ptr = stack;
	while(ptr != NULL)
	{
		if(ptr->next != NULL && ptr->index > ptr->next->index)
				ft_printf("stack is not organized\n");
			ptr = ptr->next;
	}
	ft_printf("stack is organized\n");
}