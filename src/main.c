/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradis <vradis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:06:07 by vflorez           #+#    #+#             */
/*   Updated: 2024/01/15 11:55:16 by vradis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/*int main(int argc, char *argv[])
{
	t_stack_node *stack_a;
	stack_a = NULL;

	int i = 1;
	while (i < argc)
	{
		int value = ft_atoi(argv[i]);
		ft_node_index(&stack_a, value);
		if(!check_limits(&stack_a) || !check_duplicate(&stack_a) || !check_str(argv[i]))
		{
			ft_printf("invalid input");
			ft_free(stack_a);
			return (1);
		}
		i++;
	}

	printStack("Inicial A", stack_a);

	ft_sort_3(&stack_a);

	printStack("Final A", stack_a);
	ft_free(stack_a);

	return 0;
}*/

int main(int argc, char *argv[])
{
	t_stack_node	*stack_a = NULL;
	//t_stack_node	*stack_b = NULL;


	int arg = 1;
	/*if(argc <= 2 || argv[arg][0] == '\0')
		ft_printf("Error\n");*/
	
	while (arg < argc)
	{
		int value = ft_atoi(argv[arg]);
		ft_node_index(&stack_a, value);
		if(!check_limits(&stack_a) || !check_duplicate(&stack_a) || !check_str(argv[arg]))
		{
			ft_printf("invalid input");
			ft_free(stack_a);
			return (1);
		}
		arg++;
	}
	
	printStack("Inicial A", stack_a);
	//printStack("Inicial B", stack_b);
	
	ft_rra(&stack_a);
	//ft_sort_all(&stack_a);

	printStack("Final A", stack_a);
	ft_free(stack_a);
	//ft_free(stack_b);
	return (0);
}