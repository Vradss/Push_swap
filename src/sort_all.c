/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:44:03 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/20 18:06:16 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_all(t_stack_node **stack_a)
{
	t_stack_node	*stack_b;
	int				stack_size_a;

	stack_b = NULL; //acá inicializamos stackB
	stack_size_a = stack_size(*stack_a);
	if(stack_size_a == 2)
		ft_sa(stack_a);
	if(stack_size_a == 3)
		ft_sort_3(stack_a);
}