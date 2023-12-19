/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:07:28 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/18 19:35:34 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_5(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int				min_index;
	t_stack_node	*ptr;
	
	if(ft_stack_organized(&stack_a))
		return;
	while(stack_size(&stack_a) > 3)
		ft_pb(stack_a, stack_b);
	
}