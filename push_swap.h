/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:14:44 by vflorez           #+#    #+#             */
/*   Updated: 2023/12/13 20:39:31 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "src/libft.h"

/*----------------Main----------------*/

typedef struct stack_node{
	int					data;
	struct stack_node 	*next;
}	t_stack_node;

/*Handle erros*/
int	check_limits(t_stack_node **stack);
int	check_duplicate(t_stack_node **stack);
int	check_str(char *str);

/*Error & free stacks*/
void	ft_error(int error);
void	ft_free(t_stack_node *stack);

#endif