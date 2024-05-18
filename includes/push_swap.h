/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:14:44 by vflorez           #+#    #+#             */
/*   Updated: 2024/05/18 19:04:15 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../src/libft/libft.h"
# include "../src/Printf/ft_printf.h"

/*----------------Main----------------*/

typedef struct stack_node
{
	int					data;
	int					index;
	struct stack_node	*next;
}	t_stack;

/*Handle erros in argvs*/
int			check_limits(const char *str);
int			check_str(const char *str);
void		check_duplicate(t_stack *stack_a, int data);

/*Error & free stacks*/
void		ft_free(t_stack *stack);
void		ft_exit(void);
/*Stacks Utils*/
int			stack_size(t_stack *stack);
void		add_node_end(t_stack **stack, t_stack *newnode);
void		ft_node_index(t_stack **stack_a, int data);
int			ft_stack_organized(t_stack *stack);
int			ft_lowest_index(t_stack **stack);
void		ft_rra_pb(t_stack **stack_a, t_stack **stack_b, int index);
void		ft_ra_pb(t_stack **stack_a, t_stack **stack_b, int index);
int			ft_highest_index(t_stack **stack);
t_stack		*add_newnode(t_stack *stack_a, int data);
int			ft_data_limit(t_stack **stack_a, int limit_data);
void		ft_pb_chunk(t_stack **stack_a, t_stack **stack_b, int data);
void		ft_rb_pa(t_stack **stack_a, t_stack **stack_b, int index);
void		ft_rrb_pa(t_stack **stack_a, t_stack **stack_b, int index);
void		ft_handle_parsing(const char *str, t_stack **stack_a);
void		printstack(const char*name, t_stack *stack);
/*Actions allowed*/	
void		ft_sa(t_stack **stack_a);
void		ft_sb(t_stack **stack_b);
void		ft_ss(t_stack **stack_a, t_stack **stack_b);
//-----
void		ft_ra(t_stack **stack_a);
void		ft_rb(t_stack **stack_b);
void		ft_rr(t_stack **stack_a, t_stack **stack_b);
//-----
void		ft_rra(t_stack **stack_a);
void		ft_rrb(t_stack **stack_b);
void		ft_rrr(t_stack **stack_a, t_stack **stack_b);
//-----
void		ft_pa(t_stack **stack_a, t_stack **stack_b);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);

/*Sort numbers*/
void		ft_sort_3(t_stack **stack);
void		ft_sort_10(t_stack **stack_a, t_stack **stack_b);
void		ft_sort_100(t_stack **stack_a, t_stack **stack_b, int high_data);
void		ft_sort_500(t_stack **stack_a, t_stack **stack_b, int high_data);
void		ft_sort_all(t_stack **stack_a);

#endif