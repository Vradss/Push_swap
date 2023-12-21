/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:14:44 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/21 16:29:15 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../src/libft/libft.h"
#include "../src/Printf/ft_printf.h"

/*----------------Main----------------*/

typedef struct stack_node{
	int					data;
	int					index;
	struct stack_node 	*next;
}	t_stack_node;

/*Handle erros in argvs*/
int		check_limits(t_stack_node **stack);
int		check_duplicate(t_stack_node **stack);
int		check_str(char *str);
void	ft_handle_parsing(char *str, t_stack_node **stack_a);

/*Error & free stacks*/
void	ft_free(t_stack_node *stack);

/*Stacks Utils*/
int		stack_size(t_stack_node *stack);
void	*add_node_end(t_stack_node **stack, t_stack_node *newnode);
void	printStack(const char *name, t_stack_node* stack);
int		ft_stack_organized(t_stack_node *stack);
void	ft_node_index(t_stack_node	**stack_a, int data);


/*Actions allowed*/	
void	ft_sa(t_stack_node **stack_a);
void	ft_sb(t_stack_node **stack_b);
void	ft_ss(t_stack_node **stack_a, t_stack_node **stack_b);
//-----
void 	ft_ra(t_stack_node **stack_a);
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
void	ft_sort_all(t_stack_node **stack_a);

#endif