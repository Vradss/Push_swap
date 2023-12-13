/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:02:38 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/13 13:23:37 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

/*This function prints error in any case*/
void	ft_error(int error)
{
	ft_printf("Error\n");
}

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
