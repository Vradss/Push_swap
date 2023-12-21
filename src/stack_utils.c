/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 08:12:33 by vradis            #+#    #+#             */
/*   Updated: 2023/12/21 15:43:39 by vflorez          ###   ########.fr       */
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


/*Function that prints stacks*/
void	printStack(const char *name, t_stack_node* stack) 
{
	ft_printf("Stack %s: ", name);
	while (stack != NULL) {
		ft_printf("%d -> ", stack->data);
		//ft_printf("index : %d -> ", stack->index);
		stack = stack->next;
	}
	ft_printf("NULL\n");
}


/*Function creates a new node to add in stack and 
initialize the alias index in 1 */
static t_stack_node	*add_newnode(t_stack_node *stack_a, int data)
{
	t_stack_node	*newnode;
	newnode = malloc(sizeof(t_stack_node));
	if (newnode == NULL)
	{
		ft_free(stack_a);
		ft_printf("Error\n");
	}
	newnode->data = data;
	newnode->index = 1;
	newnode->next = NULL;
	return (newnode);
}

/*Functions:
1. Create a newnode
2. Create the alias index in each node or data and it will help
to organize the stack */

void ft_node_index(t_stack_node	**stack_a, int data)
{
	t_stack_node	*newnode;
	t_stack_node	*ptr;

	newnode = add_newnode(*stack_a, data);
	if(*stack_a == NULL)
		*stack_a = newnode;
	else
	{
		ptr = *stack_a;
		if(ptr->data > newnode->data)
			ptr->index++;
		else
			newnode->index++;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
			if(ptr->data > newnode->data)
				ptr->index++;
			else
				newnode->index++;
		}
		ptr->next = newnode;
	}
}


/*Function that checks if the numbers in the stack are organized
from smallest to largest
Return 1 = Organized
Return 0 = Not Organized*/

int	ft_stack_organized(t_stack_node *stack)
{
	t_stack_node	*ptr;

	ptr = stack;
	while(ptr != NULL)
	{
		if(ptr->next != NULL && ptr->index > ptr->next->index)
		{
			ft_printf("Stack is not organized\n");
			return (0);
		}
		ptr = ptr->next;
	}
	ft_printf("Stack organized\n");
	return(1);
}

