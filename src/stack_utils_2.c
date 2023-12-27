/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:08:37 by vradis            #+#    #+#             */
/*   Updated: 2023/12/27 19:40:33 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function that returns the position of the lowest index*/
int	ft_lowest_index(t_stack_node **stack)
{
	t_stack_node	*ptr;
	int				low_index;
	int 			i;
	
	low_index = 0;
	i = 1;
	ptr = *stack;
	while (ptr != NULL)
	{
		if(ptr->index < (*stack)->index)
		{
			(*stack)->index = ptr->index; //se actualiza
			low_index = i;
		}
		ptr = ptr->next;
		i++;
	}
	return(low_index);
}

