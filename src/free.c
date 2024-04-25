/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:02:38 by vflorez           #+#    #+#             */
/*   Updated: 2024/04/25 15:47:41 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This functions free memory in stack*/
void	ft_free(t_stack_node *stack)
{
	t_stack_node	*ptr;

	while (stack != NULL)
	{
		ptr = stack->next;
		free(stack);
		stack = ptr;
	}
}
