/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:50:18 by vflorez           #+#    #+#             */
/*   Updated: 2024/04/28 20:08:36 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function checks data int_limits */
int	check_limits(t_stack **stack)
{
	t_stack	*newnode;

	newnode = *stack;
	while (newnode != NULL)
	{
		if (newnode->data > INT_MAX || newnode->data < INT_MIN)
		{
			return (ft_printf("Error\n"), 0);
		}
		newnode = newnode->next;
	}
	return (1);
}

/*Function checks repeat or duplicate data nodes*/
int	check_duplicate(t_stack **stack)
{
	t_stack	*newnode;
	t_stack	*duplicate;

	newnode = *stack;
	if (check_limits(stack) != 1 || newnode == NULL)
		return (0);
	while (newnode != NULL)
	{
		duplicate = newnode->next;
		while (duplicate != NULL)
		{
			if (newnode->data == duplicate->data)
			{
				return (ft_printf("Error\n"), 0);
			}
			duplicate = duplicate->next;
		}
		newnode = newnode->next;
	}
	return (1);
}

/*Function checks if the argument is a digit or not*/
int	check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			i++;
		if (ft_isdigit(str[i]) == 0)
			return (ft_printf("Error\n"), 0);
		i++;
	}
	return (1);
}

// void	ft_handle_parsing(char *str, t_stack **stack_a)
// {
// 	char	*ptr;
// 	int		data;

// 	ptr = str;
// 	if (!check_str(ptr))
// 		return ;
// 	data = ft_atoi(ptr);
// 	if (!check_limits(data))
// 		return ;
// 	check_duplicate(*stack_a, data);
// 	ft_node_index(stack_a, data);
// }
