/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:13:55 by vradis            #+#    #+#             */
/*   Updated: 2023/12/27 19:44:26 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra_pb(t_stack_node **stack_a, t_stack_node **stack_b, int index)
{
    while(index > 1)
    {
        ft_ra(stack_a);
        index--;
    }
    ft_pb(stack_a, stack_b);
}

void	ft_rra_pb(t_stack_node **stack_a, t_stack_node **stack_b, int index)
{
	while(index <= stack_size(*stack_a))
	{
		ft_rra(stack_a);
		index++;
	}
	ft_pb(stack_a, stack_b);
}


void    ft_sort_10(t_stack_node **stack_a, t_stack_node **stack_b)
{
    int index;
    
    while(stack_size(*stack_a) > 3)
    {
        index = ft_lowest_index(stack_a);
        if (index <= (stack_size(*stack_a) / 2 ))
            ft_ra_pb(stack_a,stack_b, index);
        else
            ft_rra_pb(stack_a,stack_b, index);
    }
	if(ft_stack_organized(*stack_a) == 0)
		ft_sort_3(stack_a);
	while(stack_size(*stack_b) != 0)
		ft_pa(stack_a, stack_b);
}