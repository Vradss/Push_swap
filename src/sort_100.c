/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:19:33 by vflorez           #+#    #+#             */
/*   Updated: 2024/04/27 18:39:37 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This function counts how many elements in stack_a
have an index equal to or less than limit_data*/
int	ft_data_limit(t_stack **stack_a, int limit_data)
{
	t_stack	*ptr;
	int				i;

	ptr = *stack_a;
	i = 0;
	while (ptr)
	{
		if (ptr->index <= limit_data)
			i++;
		ptr = ptr->next;
	}
	return (i);
}

/*This function pushes a chunk of elements of stack_a to stack_b
based on data_limit*/
void	ft_pb_chunk(t_stack **stack_a, t_stack **stack_b, int data)
{
	int	i;

	i = ft_data_limit(stack_a, data);
	while (i > 0)
	{
		if ((*stack_a)->index <= data)
		{
			ft_pb(stack_a, stack_b);
			i--;
		}
		else
			ft_ra(stack_a);
	}
}

void	ft_rb_pa(t_stack **stack_a, t_stack **stack_b, int index)
{
	while (index > 1)
	{
		ft_rb(stack_b);
		index--;
	}
	ft_pa(stack_a, stack_b);
}

void	ft_rrb_pa(t_stack **stack_a, t_stack **stack_b, int index)
{
	while (index <= stack_size(*stack_b))
	{
		ft_rrb(stack_b);
		index++;
	}
	ft_pa(stack_a, stack_b);
}

void	ft_sort_100(t_stack **stack_a, t_stack **stack_b, int high_data)
{
	int	chunk;
	int	high_index;
	int	low_data;

	(void)stack_b;
	low_data = 1;
	chunk = high_data / 4;
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
