/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:37:41 by vradis            #+#    #+#             */
/*   Updated: 2024/01/15 17:37:30 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function that take the first element at the top of 
stack B and put it at the top of stack A*/
void	ft_pa(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node    *ptr;

	if (stack_size(*stack_b) > 0)
	{
		ptr = *stack_b;
		*stack_b = ptr->next;
		ptr->next = *stack_a;
		*stack_a = ptr;
		ft_printf("pa\n");
	}
	
}
/*Function that take the first element at the top of 
stack A and put it at the top of stack B*/
void	ft_pb(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*ptr;

	if (stack_size(*stack_a) > 0)
	{
		ptr = *stack_a;
		*stack_a = ptr->next;
		ptr->next = *stack_b;
		*stack_b = ptr;
		ft_printf("pb\n");
	}
	
}
