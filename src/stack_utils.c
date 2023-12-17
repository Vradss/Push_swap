/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 08:12:33 by vradis            #+#    #+#             */
/*   Updated: 2023/12/17 14:15:12 by vradis           ###   ########.fr       */
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

/*Function that print stacks*/
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
