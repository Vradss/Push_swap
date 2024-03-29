/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:08:37 by vradis            #+#    #+#             */
/*   Updated: 2024/01/19 13:53:42 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function that returns the position of the lowest index*/
int	ft_lowest_index(t_stack_node **stack)
{
	t_stack_node	*ptr;
	int				low_index;
	int				low_data;
	int				i;

	low_index = 0;
	i = 1;
	ptr = *stack;
	low_data = (*stack)->index;
	while (ptr != NULL)
	{
		if (ptr->index < low_data)
		{
			low_data = ptr->index;
			low_index = i;
		}
		ptr = ptr->next;
		i++;
	}
	return (low_index);
}

/*Function that returns the position of the highest index*/
int	ft_highest_index(t_stack_node **stack)
{
	t_stack_node	*ptr;
	int				high_index;
	int				high_data;
	int				i;

	high_index = 0;
	i = 1;
	ptr = *stack;
	high_data = (*stack)->index;
	while (ptr != NULL)
	{
		if (ptr->index < high_data)
		{
			high_data = ptr->index;
			high_index = i;
		}
		ptr = ptr->next;
		i++;
	}
	return (high_index);
}
