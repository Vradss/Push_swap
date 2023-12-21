/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:56:19 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/21 15:30:58 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_stack_node **stack)
{
	int	top;
	int	middle;
	int	bottom;

	top = (*stack)->data;
	middle = (*stack)->next->data;
	bottom = (*stack)->next->next->data;
	if (top > middle && middle < bottom && top < bottom)
		ft_sa(stack);
	else if (top > middle && middle > bottom && top > bottom)
	{
		ft_sa(stack);
		ft_rra(stack);
	}
	else if (top > middle && middle < bottom && top > bottom)
	{
		ft_ra(stack);
	}
	else if (top < middle && middle > top && top < bottom)
	{
		ft_sa(stack);
		ft_ra(stack);
	}
	else if (top < middle && middle > bottom && top > bottom)
		ft_rra(stack);
}
