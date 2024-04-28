/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:06:07 by vflorez           #+#    #+#             */
/*   Updated: 2024/04/28 19:13:49 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	int		arg;
	int		value;

	arg = 1;
	stack_a = NULL;
	if (argc == 1)
		return (0);
	while (arg < argc)
	{
		value = ft_atoi(argv[arg]);
		ft_node_index(&stack_a, value);
		if (!check_limits(&stack_a) || !check_duplicate(&stack_a)
			|| !check_str(argv[arg]))
		{
			ft_free(stack_a);
			return (1);
		}
		arg++;
	}
	if (!ft_stack_organized(stack_a))
		ft_sort_all(&stack_a);
	ft_free(stack_a);
	return (0);
}
