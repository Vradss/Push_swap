/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:06:07 by vflorez           #+#    #+#             */
/*   Updated: 2024/04/27 18:53:52 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = NULL;
	int arg = 1;
	if (argc == 1 || argv[arg][0] == '\0')
		ft_printf("Error\n");
	
	while (arg < argc)
	{
		int value = ft_atoi(argv[arg]);
		ft_node_index(&stack_a, value);
		if(!check_limits(&stack_a) || !check_duplicate(&stack_a) || !check_str(argv[arg]))
		{
			ft_free(stack_a);
			return (1);
		}
		arg++;
	}
	if (!ft_stack_organized(stack_a))
	{
		ft_sort_all(&stack_a);	
	}
	ft_free(stack_a);
	return (0);
}
