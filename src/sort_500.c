/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:20:17 by vradis            #+#    #+#             */
/*   Updated: 2024/04/28 10:05:53 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_sort_500(t_stack **stack_a, t_stack **stack_b, int high_data)
{
	int	chunk;
	int	high_index;
	int	low_data;

	(void)stack_b;
	low_data = 1;
	chunk = high_data / 11;
	while (stack_size(*stack_a) > 0)
	{
		ft_pb_chunk(stack_a, stack_b, low_data);
		low_data = low_data + chunk;
	}
	while (stack_size(*stack_b) > 0)
	{
		high_index = ft_highest_index(stack_b);
		if (high_index <= (stack_size(*stack_b) / 2))
			ft_rb_pa(stack_a, stack_b, high_index);
		else if (high_index > (stack_size(*stack_b) / 2))
			ft_rrb_pa(stack_a, stack_b, high_index);
	}
}
