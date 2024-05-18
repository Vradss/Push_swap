/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:50:18 by vflorez           #+#    #+#             */
/*   Updated: 2024/05/18 19:04:38 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Function checks data int_limits */
int	check_limits(const char *str)
{
	int		i;
	long	res;
	long	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	res *= sign;
	if (res > INT_MAX || res < INT_MIN)
		return (0);
	else
		return (1);
}

/*Function checks repeat or duplicate data nodes*/
void	check_duplicate(t_stack *stack_a, int data)
{
	while (stack_a != NULL)
	{
		if (stack_a->data == data)
			ft_exit();
		stack_a = stack_a->next;
	}
}

/*Function checks if the argument is a digit or not*/
// int	check_str(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == '+' || str[i] == '-')
// 			i++;
// 		if (ft_isdigit(str[i]) == 0)
// 		{
// 			ft_printf("Error\n");
// 			exit(EXIT_FAILURE);
// 		}
// 		i++;
// 	}
// 	return (1);
// }
int	check_str(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0' && !ft_space(str[i]))
	{
		if (!ft_isdigit(str[i]) && !ft_posneg(str[1]))
			ft_exit();
		if (ft_posneg(str[i]) && ft_posneg(str[i + 1]))
			ft_exit();
		if (ft_posneg(str[i]) && str[i + 1] == '\0')
			ft_exit();
		if (ft_posneg(str[i]) && ft_space(str[i + 1]))
			ft_exit();
		if (ft_posneg(str[i]) && !ft_space(str[i + 1])
			&& ft_posneg(str[i + 2]))
			ft_exit();
		i++;
	}
	while (ft_space(str[i]))
		i++;
	return (i);
}

void	ft_handle_parsing(const char *str, t_stack **stack_a)
{
	const char	*ptr;
	int			data;
	int			args;

	ptr = str;
	args = check_str(ptr);
	if (!check_limits(ptr))
		ft_exit();
	data = ft_atoi(ptr);
	check_duplicate(*stack_a, data);
	ft_node_index(stack_a, data);
	ptr = ptr + args;
	if (*ptr != '\0')
		return (ft_handle_parsing(ptr, stack_a));
}
