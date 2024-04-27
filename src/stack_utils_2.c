/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:08:37 by vradis            #+#    #+#             */
/*   Updated: 2024/04/27 18:39:37 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function that returns the position of the lowest index*/
int	ft_lowest_index(t_stack **stack)
{
	t_stack	*ptr;
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
int	ft_highest_index(t_stack **stack)
{
	t_stack	*ptr;
	int				high_index;
	int				high_data;
	int				i;

	high_index = 0;
	i = 1;
	ptr = *stack;
	high_data = (*stack)->index;
	while (ptr != NULL)
	{
		if (ptr->index > high_data)
		{
			high_data = ptr->index;
			high_index = i;
		}
		ptr = ptr->next;
		i++;
	}
	return (high_index);
}
