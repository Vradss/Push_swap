/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 08:12:33 by vradis            #+#    #+#             */
/*   Updated: 2023/12/14 12:43:52 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function that calculates the stack length*/
int	stack_size(t_stack_node *stack)
{
	int len;

	len = 1;
	if (stack)
	{
		while(stack->next != NULL)
		{
			stack = stack->next;
			len++;
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

/*Add node at the beginning of the stack
void	**add_node_beginning(struct node **head, int data)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = data;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

}*/

