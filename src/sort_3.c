/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:56:19 by vflorez           #+#    #+#             */
/*   Updated: 2024/04/27 18:39:37 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_stack **stack)
{
	int	top;
	int	middle;
	int	bottom;

	top = (*stack)->index;
	middle = (*stack)->next->index;
	bottom = (*stack)->next->next->index;
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
