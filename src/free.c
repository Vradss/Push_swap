/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:02:38 by vflorez           #+#    #+#             */
/*   Updated: 2024/04/27 18:39:37 by vradis           ###   ########.fr       */
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
