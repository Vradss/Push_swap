/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rot_actions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:26:44 by vradis            #+#    #+#             */
/*   Updated: 2024/04/27 18:39:37 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function which the last element becomes the first
element in stack A*/
void	ft_rra(t_stack **stack_a)
{
	t_stack	*ptr;
	t_stack	*lastnode;

	ptr = *stack_a;
	lastnode = NULL;
	if (stack_size(*stack_a) > 1)
	{
		while (ptr->next != NULL)
		{
			lastnode = ptr;
			ptr = ptr->next;
		}
		lastnode->next = NULL;
		ptr->next = *stack_a;
		*stack_a = ptr;
		ft_printf("rra\n");
	}
}

/*Function which the last element becomes the first
element in stack B*/
void	ft_rrb(t_stack **stack_b)
{
	t_stack	*ptr;
	t_stack	*lastnode;

	ptr = *stack_b;
	lastnode = NULL;
	if (stack_size(*stack_b) > 1)
	{
		while (ptr->next != NULL)
		{
			lastnode = ptr;
			ptr = ptr->next;
		}
		lastnode->next = NULL;
		ptr->next = *stack_b;
		*stack_b = ptr;
		ft_printf("rra\n");
	}
}

/*Function that runs rra & rrb at the same time*/
void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
	ft_printf("rrr\n");
}
