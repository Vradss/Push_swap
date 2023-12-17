/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:37:41 by vradis            #+#    #+#             */
/*   Updated: 2023/12/17 13:41:46 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function that take the first element at the top of 
stack B and put it at the top of stack A*/
void	ft_pa(t_stack_node **stack_a, t_stack_node **stack_b)
{
    t_stack_node    *ptr;

    if (stack_size(*stack_b) >= 1)
    {
        ptr = *stack_b;
        *stack_b = ptr->next;
        ptr->next = *stack_a;
        *stack_a = ptr;
        ft_printf("pa\n");
    }
    
}

void    ft_pb(t_stack_node **stack_a, t_stack_node **stack_b)
{
    t_stack_node    *ptr;

    if (stack_size(*stack_a) >= 1)
    {
        ptr = *stack_a;
        *stack_a = ptr->next;
        ptr->next = *stack_b;
        *stack_b = ptr;
        ft_printf("pb\n");
    }
    
}
