/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rot_actions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:26:44 by vradis            #+#    #+#             */
/*   Updated: 2024/01/15 11:52:36 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Printf/ft_printf.h"

/*Function which the last element becomes the first
element in stack A*/

void    ft_rra(t_stack_node **stack_a)
{
    t_stack_node    *ptr;
    t_stack_node    *lastnode;

    ptr = *stack_a;
    lastnode = NULL;
    
    if(stack_size(*stack_a) > 1)
    {
        while(ptr->next != NULL)
        {
            lastnode = ptr;
            ptr = ptr->next;
        }
        lastnode->next = NULL; //penultimo nodo apunta NULL
        ptr->next = *stack_a; //ultimo nodo apunta al primero
        *stack_a = ptr;
        ft_printf("rra\n");
    }
}

/*Function which the last element becomes the first
element in stack B*/

void    ft_rrb(t_stack_node **stack_b)
{
    t_stack_node    *ptr;
    t_stack_node    *lastnode;

    ptr = *stack_b;
    lastnode = NULL;
    
    if(stack_size(*stack_b) > 1)
    {
        while(ptr->next != NULL)
        {
            lastnode = ptr;
            ptr = ptr->next;
        }
        lastnode->next = NULL; //penultimo nodo apunta NULL
        ptr->next = *stack_b; //ultimo nodo apunta al primero
        *stack_b = ptr;
        ft_printf("rra\n");
    }
    else
    {
        ft_printf("Not enough nodes to apply rrb\n");
    }
}

/*Function that runs rra & rrb at the same time*/
void	ft_rrr(t_stack_node **stack_a, t_stack_node **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
	ft_printf("rrr\n");
}
