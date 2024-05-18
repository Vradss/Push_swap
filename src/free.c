/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:02:38 by vflorez           #+#    #+#             */
/*   Updated: 2024/05/18 18:59:40 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This functions free memory in stack*/
void	ft_free(t_stack *stack)
{
	t_stack	*ptr;

	while (stack != NULL)
	{
		ptr = stack->next;
		free(stack);
		stack = ptr;
	}
}

void	ft_exit(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}
