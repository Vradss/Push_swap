/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:14:44 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/14 15:28:11 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "src/libft/libft.h"
#include "src/Printf/ft_printf.h"

/*----------------Main----------------*/

typedef struct stack_node{
	int					data;
	struct stack_node 	*next;
}	t_stack_node;

/*Handle erros in argvs*/
int	check_limits(t_stack_node **stack);
int	check_duplicate(t_stack_node **stack);
int	check_str(char *str);

/*Error & free stacks*/
void	ft_error(int error);
void	ft_free(t_stack_node *stack);

/*Stacks Utils*/
int		stack_size(t_stack_node *stack);
void	*add_node_end(t_stack_node **stack, t_stack_node *newnode);


/*Actions allowed*/
void	ft_sa(t_stack_node **stack_a);
void	ft_sb(t_stack_node **stack_b);
void	ft_ss(t_stack_node **stack_a, t_stack_node **stack_b);
//-----
void 	ft_ra(t_stack_node **stack_a);
void    ft_rb(t_stack_node **stack_b);
void    ft_rr(t_stack_node **stack_a, t_stack_node **stack_b);
//-----


#endif