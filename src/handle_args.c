/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:50:18 by vflorez           #+#    #+#             */
/*   Updated: 2024/01/19 16:04:19 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function checks data int_limits */
int	check_limits(t_stack_node **stack)
{
	t_stack_node	*newnode;

	newnode = *stack;
	while (newnode != NULL)
	{
		if (newnode->data > 2147483647 || newnode->data < -2147483648)
		{
			return (ft_printf("Error with limits\n"), 0);
		}
		newnode = newnode->next;
	}
	return (1);
}

/*Function checks repeat or duplicate data nodes*/
int	check_duplicate(t_stack_node **stack)
{
	t_stack_node	*newnode;
	t_stack_node	*duplicate;

	newnode = *stack;
	if (check_limits(stack) != 1 || newnode == NULL)
		return (0);
	duplicate = newnode->next;
	while (newnode != NULL)
	{
		while (duplicate != NULL)
		{
			if (newnode->data == duplicate->data)
			{
				return (ft_printf("Error with duplicates\n"), 0);
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
// void	ft_handle_parsing(char *str, t_stack_node **stack_a)
// {
// 	char	*ptr;
// 	int		data;

// 	ptr = str;
// 	data = ft_atoi(str);
// 	check_limits(stack_a);
// 	check_duplicate(stack_a);
// 	ft_node_index(stack_a, data);
// 	if (*ptr != '\0')
// 		ft_handle_parsing(ptr + 1, stack_a);
// 	return;
// }
