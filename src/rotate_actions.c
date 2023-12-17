/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_actions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:21:00 by vradis            #+#    #+#             */
/*   Updated: 2023/12/15 11:11:54 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function which the first element becomes the last 
element in stack A*/
void    ft_ra(t_stack_node **stack_a)
{
    t_stack_node *ptr;
    if (stack_size(*stack_a) >= 2)
    {
        ptr = *stack_a;
        *stack_a = ptr->next;
        ptr->next = NULL;
        add_node_end(stack_a,ptr);
        ft_printf("ra\n");
    }
}

/*Function which the first element becomes the last
element in stack B*/
void    ft_rb(t_stack_node **stack_b)
{
    t_stack_node    *ptr;
    if (stack_size(stack_b) >= 2)
    {
        ptr = *stack_b;
        *stack_b = ptr->next;
        ptr->next = NULL;
        add_node_end(stack_b, ptr);
        ft_printf("rb\n");
    }
}

/*Function that runs ft_ra and ft_rb at the same time*/
void    ft_rr(t_stack_node **stack_a, t_stack_node **stack_b)
{
    ft_ra(stack_a);
    ft_rb(stack_b);
    ft_printf("rr\n");
}