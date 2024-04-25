/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:14:44 by vflorez           #+#    #+#             */
/*   Updated: 2024/04/25 18:05:15 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "../src/libft/libft.h"
# include "../src/Printf/ft_printf.h"

/*----------------Main----------------*/

typedef struct stack_node
{
	int					data;
	int					index;
	struct stack_node	*next;
}	t_stack_node;

/*Handle erros in argvs*/
int		check_limits(t_stack_node **stack);
int		check_duplicate(t_stack_node **stack);
int		check_str(char *str);

/*Error & free stacks*/
void	ft_free(t_stack_node *stack);

/*Stacks Utils*/
int		stack_size(t_stack_node *stack);
void	add_node_end(t_stack_node **stack, t_stack_node *newnode);
void	printStack(const char *name, t_stack_node *stack);
void	ft_node_index(t_stack_node **stack_a, int data);
int		ft_stack_organized(t_stack_node *stack);
int		ft_lowest_index(t_stack_node **stack);
void	ft_rra_pb(t_stack_node **stack_a, t_stack_node **stack_b, int index);
void	ft_ra_pb(t_stack_node **stack_a, t_stack_node **stack_b, int index);
int		ft_highest_index(t_stack_node **stack);
t_stack_node*add_newnode(t_stack_node *stack_a, int data);
/*Actions allowed*/	
void	ft_sa(t_stack_node **stack_a);
void	ft_sb(t_stack_node **stack_b);
void	ft_ss(t_stack_node **stack_a, t_stack_node **stack_b);
//-----
void	ft_ra(t_stack_node **stack_a);
void	ft_rb(t_stack_node **stack_b);
void	ft_rr(t_stack_node **stack_a, t_stack_node **stack_b);
//-----
void	ft_rra(t_stack_node **stack_a);
void	ft_rrb(t_stack_node **stack_b);
void	ft_rrr(t_stack_node **stack_a, t_stack_node **stack_b);
//-----
void	ft_pa(t_stack_node **stack_a, t_stack_node **stack_b);
void	ft_pb(t_stack_node **stack_a, t_stack_node **stack_b);

/*Sort numbers*/
void	ft_sort_3(t_stack_node **stack);
void	ft_sort_10(t_stack_node **stack_a, t_stack_node **stack_b);
void	ft_sort_100(t_stack_node **stack_a, t_stack_node **stack_b, int high_data);
void	ft_sort_all(t_stack_node **stack_a);

#endif