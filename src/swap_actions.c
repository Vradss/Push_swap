/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:26:11 by vflorez           #+#    #+#             */
/*   Updated: 2024/01/18 18:21:30 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function swap top 2 numbers in Stack A*/
void	ft_sa(t_stack_node **stack_a)
{
	t_stack_node	*ptr;

	if (stack_size(*stack_a) >= 2)
	{
		ptr = *stack_a;
		*stack_a = ptr->next;
		ptr->next = (*stack_a)->next;
		(*stack_a)->next = ptr;
		ft_printf("sa\n");
	}
}

/*Function swap top 2 numbers in Stack B*/
void	ft_sb(t_stack_node **stack_b)
{
	t_stack_node	*ptr;

	if (stack_size(*stack_b) >= 2)
	{
		ptr = *stack_b;
		*stack_b = ptr->next;
		ptr->next = (*stack_b)->next;
		(*stack_b)->next = ptr;
		ft_printf("sb\n");
	}
}

/*Function that runs ft_sa and ft_sb at the same time*/
void	ft_ss(t_stack_node **stack_a, t_stack_node **stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
	ft_printf("ss\n");
}
