/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_stacks1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:26:11 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/13 20:42:57 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

/*Function swap top two numbers in Stack A*/
void	ft_sa(t_stack_node **stack_a)
{
	t_stack_node *ptr;

	if (ptr & ptr->next)
	{
		*stack_a = ptr->next;
		ptr->next = *stack_a->next;
		*stack_a->next = ptr;
		ft_printf("sa\n");
	}
}